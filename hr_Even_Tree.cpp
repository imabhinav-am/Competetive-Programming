/* 
	Author   : Abhinav
   
	Modified : 13-12-2017 04:36:42 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;
ll ctr = 0;

class graph{
	ll V;	// no. of nodes                                  
	list <ll> *adj;	//pointer to adjacency list
	public:
		graph(ll v){
			this->V = v;
			adj = new list<ll>[v];
		}
		void add_edge(ll v,ll w){	// func for adding egde in the list
			adj[v].emplace_back(w);
		}
		void dfs_util(int v, bool visited[]);	// utility func for dfs
		void dfs(ll v);	// fun for dfs
};

void graph :: dfs_util(int v, bool visited[]){
	visited[v] = true;
	ctr++;

	list <ll> :: iterator it;
	for(it = adj[v].begin(); it != adj[v].end(); ++it){
		if(visited[*it] == false)
			dfs_util(*it,visited);
	} 
}

void graph :: dfs(ll v){
	bool *visited = new bool[V];
	for(ll i=1; i<V; i++)
		visited[i] = false;

	dfs_util(v,visited);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,m,a,b;
	cin >> n >> m;
 	graph g(n+1);
 	while(m-- > 0){
 		cin >> a >> b;
 		g.add_edge(b,a);
 	}
 	ll no_even = 0;
 	while(--n > 1){
 		ctr = 0;
 		g.dfs(n);
 		if(ctr%2==0)
 			no_even++;
 	}
 	cout << no_even;
	return 0;
}