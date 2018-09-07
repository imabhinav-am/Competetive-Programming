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

int main(){
	faster;
	ll t,n,m,a,b,tmp,x;
	cin >> t;
	while(t--){
		cin >> n >> m >> a >> b;
		map<ll, set<ll>> mp;
		rep(i,1,n)
			mp[i].insert(-1);
		rep(i,1,n){
			cin >> x;
			mp[x].insert(i);
		}
		vi c(m);
		rep(l,0,m)
			c[l] = (a*l + b)%n;
		for(auto i=mp.begin(); i!=mp.end(); i++){
			cout << i->first << " ";
			for(auto j=(i->second).begin(); j!=(i->second).end(); j++)
				cout << *j << " ";
			cout << "\n";
		}
		cout << "\n";
		ll sum = 0,mx;
		map<ll,ll> visited;
		for(int l=0; l<m; l++){
			for(auto it=mp.begin(); it!=mp.end(); it++){
				if(it->first == c[l]){
					mx = 0;
					for(auto itr=(it->second).begin(); itr!=(it->second).end(); itr++){
						auto tt = mp[*itr].rbegin();
						if(*tt>mx && visited.find(*tt)==visited.end())
							mx = *tt;
						if(*itr>mx && visited.find(*itr)==visited.end())
							mx = *itr;
					}
				}
				sum += mx;
				visited[mx]++;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}