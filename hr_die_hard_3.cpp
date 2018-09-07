/* 
	Author   : Abhinav
   
	Modified : 28-12-2017 12:41:20 AM

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
	ll t,a,b,c;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		if(c% __gcd(a,b) == 0 && c <= max(a,b))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}