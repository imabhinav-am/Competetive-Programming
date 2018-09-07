/* 
	Author   : Abhinav
   
	Modified : 13-08-2018 11:31:29 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n,x,mx=1;
	cin >> n;
	vi f(101,0);
	rep(i,0,n){
		cin >> x;
		f[x]++;
		if(f[x]>mx)
			mx = f[x];
	}
	cout << mx;
	return 0;
}