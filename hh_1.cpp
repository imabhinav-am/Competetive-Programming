/* 
	Author   : Abhinav
   
	Modified : 20-01-2018 12:19:56 AM

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
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vi v(n+1);
		ll sum = 0;
		for(i,0,n+1){
			cin >> v[i];
			sum += v[i];
			if(sum%2 == 0 && i!=n)
				sum++;
		}
		cout << sum << "\n";
	}
	return 0;
}