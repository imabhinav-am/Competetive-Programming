/* 
	Author   : Abhinav
   
	Modified : 31-12-2017 12:23:54 AM

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
		vi v(n);
		for(i,0,n)
			cin >> v[i];
		int flag = 0;
		for(i,0,n-1){
			for(j,i+1,n){
				if(__gcd(v[i],v[j]) == 1 && v[i] != v[j]){
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				break;
		}
		if(flag == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}