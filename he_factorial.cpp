/* 
	Author   : Abhinav
   
	Modified : 26-07-2018 11:15:23 PM

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
	ll n,t;
	vi v(100005);
	v[0] = 1;
	v[1] = 1;
	for(int i=2; i<100005; i++)
		v[i] = ((v[i-1]%mod)*(i%mod))%mod;
	cin >> t;
	while(t--){
		cin >> n;
		cout << v[n] << "\n";
	}
	return 0;
}