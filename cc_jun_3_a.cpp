/* 
	Author   : Abhinav
   
	Modified : 

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

const int ALPHABET_SIZE = 26;
 
// trie node
struct TrieNode{
    struct TrieNode *children[ALPHABET_SIZE];
 
    // isEndOfWord is true if the node represents
    // end of a word
    bool isEndOfWord;
    int h;
};
 
// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void){
    struct TrieNode *pNode =  new TrieNode;
 
    pNode->isEndOfWord = false;
 
    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = NULL;
 
    return pNode;
}

void insert(struct TrieNode *root, string key){
    struct TrieNode *pCrawl = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
 
        pCrawl = pCrawl->children[index];
    }

    pCrawl->isEndOfWord = true;
}

bool search(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
 
    for (int i = 0; i < key.length(); i++){
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            return false;
        pCrawl = pCrawl->children[index];
        cout << char(index + 'a');
    }
    cout << "\n";
 
    return (pCrawl != NULL && pCrawl->isEndOfWord);
    	//cout << pCrawl << "\n";
}
 
// Driver
int main(){
	faster;
	ll n;
	cin >> n;
	vector <string> v(n+1);
	rep(i,0,n)
		cin >> v[i];
	cin >> t;
	while(t--){
		cin >> r >> s;
		string keys;
		rep(i,0,r){
			keys+=v[r];
		}
		string keys[] = {"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };
	    int n = sizeof(keys)/sizeof(keys[0]);
	 
	    struct TrieNode *root = getNode();
	 
	    // Construct trie
	    for (int i = 0; i < n; i++)
	        insert(root, keys[i]);
	 
	    // Search for different keys
	    search(root, "the");
	    search(root, "these");
	}
	    return 0;
}