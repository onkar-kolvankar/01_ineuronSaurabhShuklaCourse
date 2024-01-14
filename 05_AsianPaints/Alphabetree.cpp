#include<iostream>
#include<string>

using namespace std;

class TrieNode{

    char character;

    // it will have array of pointers to another TrieNodes
    TrieNode *nextCharRef[26] = {NULL}; // we will insert acc. to char numbers a-> 0 z -> 25
    bool isEndOfWord;

    public:
    TrieNode()  // default constructor
    {
        character = '\0';
        isEndOfWord = false;
        
    }

    void setCharacter(char c)
    {
        character = c;
    }

    char getCharacter()
    {
        return character;
    }

    void setNextCharRef(TrieNode *nodeRef,int index)
    {
        nextCharRef[index] = nodeRef;
    }

    TrieNode* getNextCharRef(int index)
    {
        return nextCharRef[index];
    }

    void setIsEndOfWord(bool b)
    {
        isEndOfWord = b;
    }

    bool getIsEndOfWord()
    {
        return isEndOfWord;
    }


};

class Alphabetree
{
    TrieNode *root;
    TrieNode *currentNode ;

    public:
        Alphabetree()
        {
            root = new TrieNode();
            root->setCharacter('$');    // head node will be $
        }

        void insert(string word)
        {
            int checkIndex;
            currentNode = root;

            // check if word is empty
            if(word.empty())
                return;

            // traverses the string character by character and inserts them in trie 
            for(int i = 0 ; i < word.length() ; i++)
            {   
                checkIndex = int(word[i]) - 97;
                // 1st check if the current letter's reference is in the currentNode
                if(currentNode->getNextCharRef(checkIndex) == NULL)
                {
                    // create new node
                    // add its reference to the current node
                    // set current node to the new node
                    TrieNode *newNode  = new TrieNode();
                    newNode->setCharacter(word[i]);

                    currentNode->setNextCharRef(newNode,checkIndex);
                    currentNode = newNode;
                    // check if it is last character
                    if(i == word.length() - 1)
                    {
                        // it is last character
                        currentNode->setIsEndOfWord(true);
                    }

                }
                else
                {
                    // the character's reference is present in the current node
                    // 1. go to that node
                    currentNode = currentNode->getNextCharRef(checkIndex);
                    // 2. check if it is end of node
                    if(i == word.length() - 1)
                    {
                        // it is last character
                        currentNode->setIsEndOfWord(true);
                    }

                }
            }
            cout << "Word inserted in trie" << endl;

        }

        void printWords(TrieNode *currentNode,string word)
        {
            if(currentNode->getIsEndOfWord())
                    cout << word << endl;

            for(int i = 0 ; i < 26 ; i++)
            {

                if(currentNode->getNextCharRef(i) == NULL)
                    continue;

                // recursive call back
                printWords(currentNode->getNextCharRef(i),word + currentNode->getNextCharRef(i)->getCharacter() );
            }
        }

        void display()
        {
            printWords(root,"");
        }
};


int main()
{
    Alphabetree tree;

    // tree.insert("apple");
    tree.insert("ap");
    tree.insert("ae");
    tree.insert("apple");
    tree.insert("dog");
    tree.insert("dogbark");
    tree.insert("cat");
    tree.insert("catn");

    tree.display();


    return 0;
}