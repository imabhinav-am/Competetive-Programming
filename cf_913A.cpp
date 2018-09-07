/* 
	Author   : Abhinav
   
	Modified : 18-01-2018 12:13:34 AM

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
	ll m,n;
	cin >> n >> m;
	if(n<27){
		ll N = pow(2,n);
		cout << m%N;
	}
	else
		cout << m;
	return 0;
}