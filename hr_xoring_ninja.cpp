/* 
	Author   : Abhinav
   
	Modified : 22-12-2017 08:13:10 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,bits,x,ans;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		vi v(n);
		bits = 0;
		for(i,0,n){
			cin >> v[i];
			bits |= v[i];
		}
		ans = pow(2,n-1);
		cout << (ans)%mod * (bits)%mod << "\n";
	}
	return 0;
}