/* 
	Author   : Abhinav
   
	Modified : 18-12-2017 11:39:48 PM

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
	ll t,l,b,ans;
	cin >> t;
	while(t-- > 0){
		cin >> l >> b;
		if(l == b)
			cout << "1\n";
		else{
			ans = l*b;
			for(i,2,max(l,b)){
				if(l%i == 0 && b%i == 0){
					if((l*b)/(i*i) < ans)
					ans = (l*b)/(i*i);
				}
			}
			cout << ans << "\n";
		}
	}
	return 0;
}