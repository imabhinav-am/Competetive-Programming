/* 
	Author   : Abhinav
   
	Modified : 21-01-2018 09:19:20 PM

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
	ll t,n,k,temp;
	cin >> t;
	while(t--){
		cin >> n >> k;
		if(k == 1){
			temp = (sqrt(1+8*n)-1)/2;
			cout << temp << "\n";
		}
		if(k == 2){
			temp = cbrt(2*n);
			ll i = (temp*(temp+1)*(2*temp+1))/6;
			while(i<=n){
				temp++;
				i += temp*temp;
			}
			cout << temp-1 << "\n";
		}
		if(k == 3){
			temp = (sqrt(1+8*sqrt(n))-1)/2;
			cout << temp << "\n";
		}	
	}
	return 0;
}