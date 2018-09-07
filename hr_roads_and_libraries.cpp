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
 
class Graph{
    int V;
    list<int> *adj;
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V); 
    void addEdge(int v, int w);
    int connectedComponents();
};
 
int Graph::connectedComponents(){
    bool *visited = new bool[V];
    for(int v = 0; v < V; v++)
        visited[v] = false;
 
 	int ctr = 0;
    for (int v=0; v<V; v++){
        if (visited[v] == false){
            DFSUtil(v, visited);
            ctr++;
            cout << "\n";
        }
    }
    return ctr;
}
 
void Graph::DFSUtil(int v, bool visited[]){
    visited[v] = true;
 	list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}
 
Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
    adj[w].push_back(v);
}

int main(){
	faster;

    int q,m,n,clib,cr,a,b,ctr_cnn;
    cin >> q;
    while(q--){
    	cin >> m >> n >> clib >> cr;
    	Graph g(m+1);
    	for(int i=0; i<n; i++){
    		cin >> a >> b;
    		g.addEdge(a, b);
    	}
    	ctr_cnn = g.connectedComponents();
    	cout << ctr_cnn << "\n";
    }

	return 0;
}