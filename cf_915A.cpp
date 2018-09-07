/* 
	Author   : Abhinav
   
	Modified : 18-01-2018 12:41:59 AM

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
	ll n,k;
	cin >> n >> k;
	vi v(n);
	for(i,0,n)
		cin >> v[i];
	sort(v.begin(), v.end());
	ll j = n-1;
	while(k%v[j] != 0)
		j--;
	cout << k/v[j];
	return 0;
}