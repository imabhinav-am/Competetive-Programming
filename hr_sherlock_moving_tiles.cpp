/* 
	Author   : Abhinav
   
	Modified : 18-12-2017 10:40:13 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long double ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll v1,v2,side,t,area;
	cin >> side >> v1 >> v2;
	cin >> t;
	while(t-- > 0){
		cin >> area;
		cout << setprecision(21) << showpoint << (side*sqrt(2) - sqrt(2*area))/abs(v2-v1) << "\n";
	}
	return 0;
}