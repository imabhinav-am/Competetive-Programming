#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> adj[100005],lev(100005);
vector<bool> vis(100005,false);

void bfs(){
	queue<int> q;
	q.push(1);
	lev[1] = 1;
	vis[1] = true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int i=0; i<adj[x].size(); i++){
			if(!vis[adj[x][i]]){
				vis[adj[x][i]] = true;
				q.push(adj[x][i]);
				lev[adj[x][i]] = lev[x]+1;
			}
		}
	}
}

int main(){
	int n,a,b;
	cin >> n;
	for(int i=1; i<n; i++){
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	bfs();

	return 0;
}