/* 
	Author   : Abhinav
   
	Modified : 22-12-2017 05:59:34 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

ll msb(ll n){
	ll m = -1;
	while(n > 0){
		n = n >> 1;
		m++;
	}
	return m;
}

ll and_p(ll a, ll b){
	ll ans = 0;
	ll msb_a,msb_b;
	while(a > 0 && b > 0){
		msb_a = msb(a);
		msb_b = msb(b);
		if(msb_a != msb_b)
			break;
		ans += pow(2,msb_a);
		a -= pow(2,msb_a);
		b -= pow(2,msb_a);		
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,a,b;
	cin >> t;
	while(t-- > 0){
		cin >> a >> b;
		cout << and_p(a,b) << "\n";
	}
	return 0;
}