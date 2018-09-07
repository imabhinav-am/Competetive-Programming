/* 
	Author   : Abhinav
   
	Modified : 11-08-2018 09:44:08 PM

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
	ll n,t,ans=0;
	cin >> n;
	while(n){
		ans = 0;
		t = n;
		while(t){
			ans += t*t;
			t--;
		}
		cout << ans << "\n";
		cin >> n;
	}
	return 0;
}