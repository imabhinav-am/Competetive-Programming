/* 
	Author   : Abhinav
   
	Modified : 26-12-2017 10:41:51 PM

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
	ll t,n,buy,sell,pr,ctr;
	cin >> t;
	while(t--){
		cin >> n;
		vi v(n);
		pr = 0;
		for(i,0,n)
			cin >> v[i];
		for(i,0,n-1){
			buy = 0;
			ctr = 0;
			if(v[i+1] > v[i]){
				while(i < n){
					buy += v[i];
					ctr++;
					i++;
					if(v[i+1] < v[i] || i == n-1)
						break;
				}
				sell = ctr*v[i];
				pr += sell - buy;
			}
		}
		cout << pr << "\n";
	}
	return 0;
}