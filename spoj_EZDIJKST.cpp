/* 
	Author   : Abhinav
   
	Modified : 26-08-2018 07:27:18 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;
typedef pair<ll,ll> PLL;

#define faster  ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define PB push_back 
#define MP make_pair
#define INF 0x3f3f3f3f

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

class graph{
	ll V;
	list<PLL> *adj;
	public:
		graph(ll v){
			this->V = v;
			adj = new list<PLL>[V]; 
		}
		void add_edge(ll u, ll v, ll w){
			adj[u].PB(MP(v,w));
			//adj[v].PB(MP(u,w));
		}
		ll shrtpath(ll,ll);
};

ll graph :: shrtpath(ll src,ll dest){
	set<PLL> st;
	vi dist(V,INF);
	dist[src]=0;
	st.insert(MP(0,src));
	while(!st.empty()){
		ll u = (st.begin())->second;
		st.erase(st.begin());
		for(auto i=adj[u].begin(); i!=adj[u].end(); i++){
			ll v = i->first;
			ll w = i->second;
			if(dist[v]>dist[u]+w){
				if(dist[v]!=INF)
					st.erase(st.find(MP(dist[v],v)));
				dist[v] = dist[u]+w;
				st.insert(MP(dist[v],v));
			}
		}
	}
	/*for(int i=0; i<V; i++)
		cout << dist[i] << "\n";
	cout << "\n";*/
	return dist[dest];
}

int main(){
	faster;
	ll t,v,e,p,q,w,ans=0;
	cin >> t;
	while(t--){
		cin >> v >> e;
		graph g(v);
		while(e--){
			cin >> p >> q >> w;
			g.add_edge(p-1,q-1,w);
		}
		cin >> p >> q;
		ans = g.shrtpath(p-1,q-1);
		ans==INF?cout<<"NO\n":cout<<ans<<"\n";
	}
	return 0;
}