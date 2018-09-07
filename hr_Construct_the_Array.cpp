/* 
	Author   : Abhinav
   
	Modified : 03-12-2017 09:33:43 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define for(i,n) for(ll i=0; i<n; i++)
#define for_(i,j,k) for(ll i=j;i<=k;i++)

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,k,x;
	cin >> n >> k >> x;
	ll vac = n-2;
	if(vac == 2){
		cout << ((k-1)*(k-2)+1)%mod;
	}
	else if(vac == 3){
		cout << ((k-2)*((k-2)*(k-2) + 2*k-2))%mod;
	}
	else{
		vac = vac - 3;
		ll ans = pow(k-1,vac);
		cout << (ans*(k-2)*((k-2)*(k-2) + 2*k-2))%mod;
	}
	return 0;
}