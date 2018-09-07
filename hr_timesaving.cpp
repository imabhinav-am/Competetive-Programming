#include <bits/stdc++.h>

using namespace std;

# define INF 0x3f3f3f3f

class graph{
    int V;                                 
    list <pair<int,int>> *adj; 
    public:
        graph(int v){
            this->V = v;
            adj = new list<pair<int,int>>[v];
        }
        void add_edge(int v,int w, int wt){   
            adj[v].emplace_back(make_pair(w,wt));
            adj[w].emplace_back(make_pair(v,wt));
        }
        void shortestPath(int s,int k);
};

void graph::shortestPath(int src, int k){
    set< pair<int, int> > setds;
 
    vector<int> dist(V, INF);
 
    setds.insert(make_pair(0, src));
    dist[src] = 0;
 
    while (!setds.empty()){
        pair<int, int> tmp = *(setds.begin());
        setds.erase(setds.begin());
        int u = tmp.second;
 
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i){
            int v = i->first;
            int weight = i->second;

            if((dist[u]+weight)%k==0 && ((dist[u]+weight)/k)%2!=0 && v!=V-1)
                weight += k;
            else if(((dist[u]+weight)/k)%2!=0 && v!=V-1)
                weight += k - (dist[u]+weight)%k;
 
            if (dist[v] > dist[u] + weight){
                if (dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v], v)));
                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v], v));
            }
        }
    }
    cout << dist[V-1];
}

int main(){
    int n,m,k,a,b,w;
    cin >> n >> k >> m;
    graph g(n+1);
    while(m--){
        cin >> a >> b >> w;
        g.add_edge(a,b,w);
    }
    g.shortestPath(1,k);
    return 0;
}