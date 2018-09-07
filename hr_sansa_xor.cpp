/* 
	Author   : Abhinav
   
	Modified : 22-12-2017 05:39:05 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

ll get_xor(vi v){
	ll ans = 0,fr;
	for(i,0,v.size()){
		fr = (i+1)*(v.size()-i);
		if(fr % 2 != 0){
			ans ^= v[i];
		}
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		vi v(n);
		for(i,0,n)
			cin >> v[i];
		cout << get_xor(v) << "\n";
	}
	return 0;
}