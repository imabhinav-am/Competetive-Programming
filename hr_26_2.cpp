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

#define for(i,j,k) for(ll i=j; i<k; i++)
#define forv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n;
	cin >> n;
	vi p(n+1);
	for(i,1,n+1)
		cin >> p[i];
	vi loc(n+1);
	for(i,1,n+1)
		cin >> loc[i];
	ll m;
	cin >> m;
	vi c_loc(m+1);
	for(i,1,m+1)
		cin >> c_loc[i];
	vi c_rng(m+1);
	for(i,1,m+1)
		cin >> c_rng[i];
	ll max_p = INT_MIN,pl=0, max_loc=0;
	for(i,1,m+1){
		pl = 0;
		ll left = c_loc[i] - c_rng[i];
		ll right = c_loc[i] + c_rng[i];
		ll city = left;
		while(city <= right && right < n+1){
			if(binary_search(loc.begin(),loc.end(),city)){
				ll city_loc = find(loc.begin(), loc.end(), city) - loc.begin();
				pl += p[city_loc];
			}
			city++;
		}
		if(pl > max_p){
			max_p = pl;
			max_loc = c_loc[i];
		}
	}
	cout << max_loc;
	return 0;
}