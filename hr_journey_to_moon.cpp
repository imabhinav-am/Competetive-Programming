/* 
    Author   : Abhinav
   
    Modified : 02-07-2018 11:20:44 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

class graph{
    ll V;   // no. of nodes                                  
    list <ll> *adj; //pointer to adjacency list
    public:
        graph(ll v){
            this->V = v;
            adj = new list<ll>[v];
        }
        void add_edge(ll v,ll w){   // func for adding egde in the list
            adj[v].emplace_back(w);
        }
        void dfs_util(ll v,vector<bool> &visited);   // utility func for dfs
        ll dfs(ll v,vector<bool> &visited); // fun for dfs
};

ll ctr=0;

void graph :: dfs_util(ll v,vector<bool> &visited){
    visited[v] = true;
    ctr++;
    for(auto it=adj[v].begin(); it!=adj[v].end(); it++){
        if(!visited[*it])
            dfs_util(*it,visited);
    }
}

ll graph :: dfs(ll v,vector<bool> &visited){
    ctr=0;
    if(!visited[v])
        dfs_util(v,visited);
    return ctr;
}

int main(){
    faster;
    ll n,m,a,b;
    cin >> n >> m; 
    graph g(n);
    while(m--){
        cin >> a >> b;
        g.add_edge(a,b);
        g.add_edge(b,a);
    }
    ll ct,sum=0,res=0;
    vector<bool> visited(n,false);
    rep(i,0,n){
        ct = g.dfs(i,visited);
        res += sum*ct;
        //cout << ct << "\n";
        sum += ct;
    }
    cout << res;
    return 0;
}