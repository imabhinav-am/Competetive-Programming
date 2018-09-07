/* 
	Author   : Abhinav
   
	Modified : 22-08-2018 07:04:54 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define make_pair mp

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n;
	cin >> n;
	vi v(n);
	rep(i,0,n)
		cin >> v[i];
	ll ctro=0, ctre=0;
	map<ll,ll> m;
	m[0]=1;
	ll ans = 0;
	rep(i,0,n){
		if(v[i]%2!=0) ctro++;
		else ctre++;
		ans += m[ctre-ctro];
		m[ctre-ctro]++;
	}
	cout << ans << "\n";
	return 0;
}