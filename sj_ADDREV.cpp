/* 
	Author   : Abhinav
   
	Modified : 10-08-2018 12:42:44 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll rev(ll n){
	ll ans=0;
	while(n>0){
		ans = ans*10 + n%10;
		n /= 10;
	}
	return ans;
}

int main(){
	faster;
	ll t,m,n,ans;
	cin >> t;
	while(t--){
		cin >> m >> n;
		ans = rev(m) + rev(n);
		cout << rev(ans) << "\n";
	}
	return 0;
}