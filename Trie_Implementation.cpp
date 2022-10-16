// Implement Trie 
class Trie {

private:
    struct Node{
        struct Node *child[26];
        bool isEnd;
    };

Node *root;
    
    
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node *cur = root;
        
        for(char x:word){
            if(cur->child[x-'a']==NULL){
                cur->child[x-'a'] = new Node();
            }
            cur = cur->child[x-'a'];
        }
        cur->isEnd = true;
    }
    
    
    bool search(string word) {
        Node *cur = root;
        
        for(char x:word){
            if(cur->child[x-'a']==NULL){
                return false;
            }
            cur = cur->child[x-'a'];
        }
        return cur->isEnd;
    }
    
    
    bool startsWith(string prefix) {
        Node *cur = root;
        
        for(char x:prefix){
            if(cur->child[x-'a']==NULL)return false;
            cur = cur->child[x-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
