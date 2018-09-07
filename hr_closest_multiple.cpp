/* 
	Author   : Abhinav
   
	Modified : 30-12-2017 11:51:51 PM

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
	long double a,b,x,t;
	cin >> t;
	while(t--){
		cin >> a >> b >> x;
		cout << x*floor(pow(a,b)/x) << "\n";
	}
	return 0;
}