/* 
	Author   : Abhinav
   
	Modified : 12-06-2018 12:38:29 AM

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
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vi v(n);
		rep(i,0,n)
			cin >> v[i];
		sort(v.begin(), v.end());
		ll ans = v[n-1];
		rep(i,0,n-1)
			ans = min(ans,v[i+1]-v[i]);
		cout << ans << "\n";
	}
	return 0;
}