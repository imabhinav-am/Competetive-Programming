/* 
	Author   : Abhinav
   
	Modified : 20-07-2018 10:47:05 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll fast_power(ll base, ll power) {
    ll result = 1;
    while(power > 0) {

        if(power & 1) {
            result = (result%mod * base%mod) % mod;
        }
        base = (base%mod * base%mod) % mod;
        power >>= 1; 
    }
    return result%mod;
}

int main(){
	faster;
	ll t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		if(k==1)
			cout << k << "\n";
		else
			cout << (((k%mod)*((fast_power(k,n)-1)%mod)%mod)*(fast_power(k-1,mod-2)%mod))%mod << "\n";
	}
	return 0;
}