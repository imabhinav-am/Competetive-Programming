/* 
	Author   : Abhinav
   
	Modified : 14-12-2017 05:24:48 PM

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
	ll T,n,c,m,num,left;
	cin >> T;
	while(T-- > 0){
		num = 0;
		cin >> n >> c >> m;
		num = n/c;
		c = n/c;
		left = 0;
		while(c > 0){
			num += (c+left)/m;
			left = c%m;
			c = c/m;
		}
		cout << num << "\n";
	}
	return 0;
}