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
        void shortestPath(int src, int n, vector<int> &p, vector<vector<int>> &wt);
        int ans(vector<vector<int>> &wt, int t,int k);
};

int graph::ans(vector<vector<int>> &wt, int t,int k){
    vector<int> a(k+1,0);
    for(int i=0; i<V; i++){
        for(auto j=adj[i].begin(); j!=adj[i].end(); j++){
            int x = j->first;
            int w = wt[i][x];
            a[w]++;
        }
    }
    for(int i=k; i>=1; i--){
        int x = a[i]/2;
        if(t>x){
            t -= x;
            if(i==0) return 1;
            a[i-1] += a[i];
        }
        else if(t==x)
            return i - 1;
        else
            return i;
    }
    return 0;
}

void graph::shortestPath(int src, int n, vector<int> &p, vector<vector<int>> &wt){
    set< pair<int, int> > setds;
 
    vector<int> dist(V, INF);
 
    setds.insert(make_pair(0, src));
    dist[src] = 0;
    p[0]=0;
    while (!setds.empty()){
        pair<int, int> tmp = *(setds.begin());
        setds.erase(setds.begin());
        int u = tmp.second;
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i){
            int v = i->first;
            int weight = i->second + wt[u][v];
            if (dist[v] > dist[u] + weight){
                p[v]=u;
                if (dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v], v)));
                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v], v));
            }
        }
    }
    int l=n-1;
    while(l!=0){
        int x=p[l];
        wt[l][x]++;
        wt[x][l]++;
        l=x;
    }
}

int main(){
    int n,m,k,a,b,w,t;
    cin >> n >> m >> k >> t;
    graph g(n);
    while(m--){
        cin >> a >> b;
        g.add_edge(a,b,0);
    }
    vector<vector <int>> wt(n,vector<int>(n,0));
    vector<int> p(n,0);
    int K=k;
    while(k--){
        g.shortestPath(0,n,p,wt);
    }
    cout << g.ans(wt,t,K)-1;
    return 0;
}