/* 
	Author   : Abhinav
   
	Modified : 29-12-2017 11:16:43 PM

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
	ll t,a,b,x,y;
	cin >> t;
	while(t--){
		cin >> a >> b >> x >> y;
		if(__gcd(a,b) == __gcd(x,y))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}