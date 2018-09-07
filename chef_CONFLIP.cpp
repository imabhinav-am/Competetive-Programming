/* 
	Author   : Abhinav
   
	Modified : 12-06-2018 12:55:56 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,g,i,n,q,no_h,no_t;
	cin >> t;
	while(t-- > 0){
		cin >> g;
		while(g-- > 0){
			cin >> i >> n >> q;
			if(n%2 == 0){
				no_h = n/2;
				no_t = n/2;
			}
			else{
				if(i == 1){
					no_t = n/2 + 1;
					no_h = n/2;
				}
				else{
					no_h = n/2 + 1;
					no_t = n/2;
				}
			}
			if(q == 1)
				cout << no_h << "\n";
			else
				cout << no_t << "\n";
		}
	}
	return 0;
}