/* 
	Author   : Abhinav
   
	Modified : 24-01-2018 12:51:52 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)
#define forv(i,j,k) for(ll i=j; i>k; i--)

void calc_dist(vi v[], ll n, ll src){
	vi dist(n,INT_MAX);
	dist[src] = 0;
	queue <ll> q;
	q.push(src);
	while(!q.empty()){
		ll ver = q.front();
		q.pop();
		for(i,0,v[ver].size()){
			if(dist[v[ver][i]-1] > dist[ver] + 6){
				dist[v[ver][i]-1] = dist[ver] + 6;
				q.push(v[ver][i]-1);
			}
		}
	}
	for(i,0,n){
		if(dist[i]!=0){
			if(dist[i] == INT_MAX)
				cout << "-1 ";
			else
				cout << dist[i] << " ";
		}
	}
	cout << "\n";
}

int main(){
	faster;
	ll t,n,e,a,b,src;
	cin >> t;
	while(t--){
		cin >> n >> e;
		vi v[n];
		while(e--){
			cin >> a >> b;
			v[a-1].emplace_back(b);
			v[b-1].emplace_back(a);
		}
		cin >> src;
		calc_dist(v,n,src-1);
	}
	return 0;
}