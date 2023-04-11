
class TrieNode {
    public:
    char data;
    TrieNode* childNode[26];
    bool isterminal;

    TrieNode(char ch){
        data = ch;
        for(int i = 0; i < 26; i++){
            childNode[i] = NULL;
        }
        isterminal = false;
    }
};
class Trie {
public:
    
    TrieNode* root;
    Trie(){
        root = new TrieNode('\0');
    } 
    
    void insertutil(TrieNode * root , string word ){
        // base case
        if(word.size() == 0){
            root->isterminal = true;
            return;
        }
       // assume all the word in CAPS
        int index = word[0]-'a';
        TrieNode* child;
    // word is present
        if(root->childNode[index] != NULL){
            child = root->childNode[index];
        }
    // absent
        else{
            child = new TrieNode(word[0]);
            root->childNode[index] = child;
        }

    // recursion
    insertutil(child , word.substr(1));
    }
    
    void insert(string word) {
        insertutil(root , word );
    }
     // searching
    bool searchUtil(TrieNode * root , string word){
        if(word.size() == 0){
            return root->isterminal;
        }
        int index = word[0]-'a';
        TrieNode* child;

        if(root->childNode[index] != NULL){
            // present then
            child = root->childNode[index];

        }
        else{
            // if absent
            return false;

        }

       // recursion
       return searchUtil(child , word.substr(1));
    }
    
    bool search(string word) {
        return searchUtil(root , word);
    }

    bool prefixSearch(TrieNode * root , string word){
        if(word.size() == 0){
            return true;
        }
        int index = word[0]-'a';
        TrieNode* child;

        if(root->childNode[index] != NULL){
            // present then
            child = root->childNode[index];

        }
        else{
            // if absent
            return false;

        }

       // recursion
       return prefixSearch(child, word.substr(1));
    }
    
    
    bool startsWith(string prefix) {
        return prefixSearch(root , prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
