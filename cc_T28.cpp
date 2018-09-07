/* 
	Author   : Abhinav
   
	Modified : 19-07-2018 06:11:10 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll gcdExtended(ll a, ll b, ll *x, ll *y);

ll modInverse(ll a, ll m){
	ll x, y;
	ll g = gcdExtended(a, m, &x, &y);
	ll res = (x%m + m) % m;
	return res;	
}

ll gcdExtended(ll a, ll b, ll *x, ll *y){
	if (a == 0){
		*x = 0, *y = 1;
		return b;
	}
	ll x1, y1;
	ll gcd = gcdExtended(b%a, a, &x1, &y1);
	*x = y1 - (b/a) * x1;
	*y = x1;
	return gcd;
}

int main(){
	faster;
	ll n,q,k,a,b;
	map<ll,ll> m;
	cin >> n >> q;
	while(n--){
		cin >> a >> b;
		a = 4*a*b + 2*max(a,b);
		m[a]++;
	}
	while(q--){
		cin >> k;
		k = k*(k+1);
		if(m[k] == 0)
			cout << "-1\n";
		else
			cout << modInverse(m[k],1e9+9) << "\n";
	}
	return 0;
}