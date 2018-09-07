/* 
	Author   : Abhinav
   
	Modified : 11-08-2018 03:23:36 PM

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
	ll t,n,x,ans,mul;
	cin >> t;
	while(t--){
		cin >> n;
		x = 5,ans=0,mul=5;
		while(n/mul > 0){
			ans += n/mul;
			mul *= x;
			//cout << mul << "\n";
		}
		cout << ans << "\n";
	}
	return 0;
}