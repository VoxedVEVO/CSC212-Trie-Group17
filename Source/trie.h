#pragma once
#include <string>
#include <vector>

class TrieNode{
    private:
        std::string nodeString;
        bool isEnglishWord;
        std::vector<TrieNode*> branches;
        int repeats = 0;
        //Remove: Remove height, not needed as height is just nodeString.size()
        int height = 0;

        friend class TrieTree;
    public:
        TrieNode(std::string nodeString, bool isEnglishWord);
        ~TrieNode();
        bool stringMatch(std::string b);
};

class TrieTree{
    private:
        TrieNode* root;
        TrieNode* insertPrivate(TrieNode* node,std::string nodeString, bool isEnglishWord);
        //int height(TrieNode* node);
        //void preorder(std::ostream& os, BSTNode* node);
        //void inorder(std::ostream& os, BSTNode* node);
        //void postorder(std::ostream& os, BSTNode* node);
        //void destroy(BSTNode* node);
        std::string outputDOTfile(TrieNode* node,std::ofstream* outfile);
    public:
        TrieTree();
        ~TrieTree();

        void insert(std::string nodeString, bool isEnglishWord);
        //int height();
        //void preorder(std::ostream& os);
        //void inorder(std::ostream& os);
        //void postorder(std::ostream& os);
        bool search(std::string nodeString);
        void outputDOTfile();
};
