/* 
	Author   : Abhinav
   
	Modified : 25-12-2017 02:02:38 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

ll mod;

#define for(i,j,k) for(ll i=j; i<k; i++)

template <class SemigroupElement, class Integer>
SemigroupElement exponentiate3(SemigroupElement x, Integer n) {
	while ((n & 1) == 0){
		x = x * x;
		n >>= 1;
	}
	SemigroupElement P = x;
	n >>= 1;
	while (n > 0) {
		x = x * x;
		if ((n & 1) != 0)
		P = P * x;
		n >>= 1;
	}
	return P;
}

pair<ll,ll> mul(pair<ll,ll> a,pair<ll,ll> b){
	ll x  = (a.first*b.first - a.second*b.second)%mod; 
	ll iy = (a.first*b.second + b.first*a.second)%mod;
	return make_pair(x,iy);
}

pair<ll,ll> cal(pair<ll,ll> p,ll k){
	pair <ll,ll> ans =  make_pair(1,0);
	while(k > 0){
		if(k&1){
			ans = mul(ans,p);
		}
		p = mul(p,p);
		k /= 2;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,a,b,k,c,d;
	cin >> t;
	while(t-- > 0){
		cin >> a >> b >> k >> mod;
		pair <ll,ll> p,ans;
		p.first = a;
		p.second = b;
		ans = cal(p,k);
		cout << (ans.first+mod)%mod << " " << (ans.second+mod)%mod << "\n";
	}
	return 0;
}