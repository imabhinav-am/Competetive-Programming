/* 
	Author   : Abhinav
   
	Modified : 22-08-2018 06:07:26 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define make_pair mp

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>=k; i--)

int main(){
	faster;
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vi va(n),vb(n);
		rep(i,0,n)
			cin >> va[i];
		rep(i,0,n)
			cin >> vb[i];
		sort(va.begin(), va.end());
		sort(vb.begin(), vb.end());
		ll ans = 0;
		repv(i,n-1,0)
			ans += va[i]*vb[i];
		cout << ans << "\n";
	}
	return 0;
}