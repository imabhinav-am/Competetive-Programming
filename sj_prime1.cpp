/* 
	Author   : Abhinav
   
	Modified : 10-08-2018 12:26:23 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

bool chkprime(ll n){
	if(n==2||n==3) return true;
	if(n==1||n%2==0||n%3==0)	return false;
	for(int i=5; i*i<=n; i+=6){
		if(n%i==0 || n%(i+2)==0) return false;
	}
	return true;
}

int main(){
	faster;
	ll t,m,n;
	cin >> t;
	while(t--){
		cin >> m >> n;
		for(int i=m; i<=n; i++){
			if(chkprime(i)) cout << i << "\n";
		}
		cout << "\n";
	}
	return 0;
}