/* 
	Author   : Abhinav
   
	Modified : 18-01-2018 01:11:29 AM

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
	ll n,m,a;
	cin >> n >> m >> a;
	cout << ((n+a-1)/a)*((m+a-1)/a);
	return 0;
}