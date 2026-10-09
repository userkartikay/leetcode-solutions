class TrieNode {
public:
    TrieNode* child[26] = {};
    bool isEnd = false;
};
class Trie {
     TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr = root;
        for (char ch : word) {
            int idx = ch - 'a';

            if (curr->child[idx] == nullptr) {
                curr->child[idx] = new TrieNode();
            }

            curr = curr->child[idx];
        }

        curr->isEnd = true;
    }
    
    bool search(string word) {
         TrieNode* curr = root;

        for (char ch : word) {
            int idx = ch - 'a';

            if (curr->child[idx] == nullptr)
                return false;

            curr = curr->child[idx];
        }

        return curr->isEnd;
        
    }
    
    bool startsWith(string prefix) {
         TrieNode* curr = root;

        for (char ch : prefix) {
            int idx = ch - 'a';

            if (curr->child[idx] == nullptr)
                return false;

            curr = curr->child[idx];
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