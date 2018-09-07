/* 
	Author   : Abhinav
   
	Modified : 19-12-2017 12:17:12 AM

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
	ll t,n,k;
	cin >> t;
	while(t-- > 0){
		cin >> n >> k;
		if(k >= n/2){
			cout << (n-k-1)*2 << "\n";
		}
		else{
			cout << 2*k + 1 << "\n";
		}
	}
	return 0;
}