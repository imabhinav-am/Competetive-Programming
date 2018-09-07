/* 
	Author   : Abhinav
   
	Modified : 14-12-2017 01:24:34 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define for(i,j,k) for(ll i=j; i<k; i++)

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll T,n,k;
	cin >> T;
	while(T-- > 0){
		cin >> n >> k;
		vi v1(n),v2(n);
		for(i,0,n)
			cin >> v1[i];
		for(i,0,n)
			cin >> v2[i];
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		reverse(v2.begin(), v2.end());
		int flag = 0;
		for(i,0,n){
			if(v1[i] + v2[i] < k){
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	return 0;
}