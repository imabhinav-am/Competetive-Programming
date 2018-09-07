/* 
	Author   : Abhinav
   
	Modified : 16-12-2017 10:54:21 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

ll total(ll num, ll r, ll n){
	if(pow(n,r) < num)
		return total(num,r,n+1) + total(num-pow(n,r),r,n+1);
	else if(pow(n,r)==num)
		return 1;
	else
		return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,num;
	cin >> num >> n;
	cout << total(num,n,1);
	return 0;
}