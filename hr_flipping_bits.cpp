/* 
	Author   : Abhinav
   
	Modified : 22-12-2017 05:20:35 PM

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
	ll n,t;
	unsigned int ans;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		ans = ~n;
		cout << ans << "\n";
	}
	return 0;
}