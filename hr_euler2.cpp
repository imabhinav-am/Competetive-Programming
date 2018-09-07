/* 
	Author   : Abhinav
   
	Modified : 02-01-2018 06:39:29 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	vi v;
	v.emplace_back(2);
	v.emplace_back(8);
	for(ll i=2; i<30; i++){
		v.emplace_back(4*v[i-1]+v[i-2]);
	}
	for(ll i=0; i<v.size(); i++)
		cout << v[i] << "\n";
   	ll t,n;
   	cin >> t;
 	while(t--){
 		cin >> n;
 		ll i=0,sum = 0;
 		while(v[i] < n){
 			sum += v[i];
 			i++;
 		}
 		cout << sum << "\n";
 	}
	return 0;
}