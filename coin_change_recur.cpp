/* 
	Author   : Abhinav
   
	Modified : 

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll count(vi s, ll m, ll n){
	if(n==0)
		return 1;
	if(n<0)
		return 0;
	if(m<=0 && n>=1)
		return 0;
	return count(s,m-1,n) + count(s,m,n-s[m-1]);
}

int main(){
	faster;
	ll n,m;
	cin >> m >> n;
	vi v(m);
	rep(i,0,m)
		cin >> v[i];
	count(v,m,n);
	return 0;
}