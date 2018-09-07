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
	vector<ll> *adj;
	public:
		graph(ll v){
			this->V = v;
			adj = new vector<ll>[V]; 
		}
		void add_edge(ll u, ll v){
			adj[u].emplace_back(v);
			sort(adj[u].begin(), adj[u].end());
		}
		ll szc(ll v){
			return adj[v].size();
		}
		bool srch(ll u,ll v){
			if(binary_search(adj[u].begin(),adj[u].end(),v)) return true;
			return false;
		}
};

int main(){
	faster;
	ll n,t,u,v;
	cin >> n;
	t = n-1;
	graph g(n+1);
	while(t--){
		cin >> u >> v;
		g.add_edge(u,v);	
	}
	vi vt(n);
	rep(i,0,n)
		cin >> vt[i];
	if(vt[0]!=1){
		cout << "No";
		return 0;
	}
	ll sizec,i,j=1,x=0;
	for(i=0;i<n;i++){
		sizec = g.szc(vt[i]);
		//cout << sizec << "\n";
		for(;j<x+sizec;j++){
			if(!g.srch(vt[i],vt[j])){
				cout << vt[i] << " " << vt[j] << "\n";
				cout << "No";
				return 0;
			}
		}
		x = j;
		j++;
	}
	cout << "Yes";
	return 0;
}