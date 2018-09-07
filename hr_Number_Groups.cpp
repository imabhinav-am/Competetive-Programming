/* 
	Author   : Abhinav
   
	Modified : 03-12-2017 08:37:56 PM

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
	ll k;
	cin >> k;
	ll n_res = k*(k+1)/2;
	ll n_left = k*(k-1)/2;
	cout << n_res*n_res - n_left*n_left;
	return 0;
}