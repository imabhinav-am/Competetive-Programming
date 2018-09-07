/* 
	Author   : Abhinav
   
	Modified : 25-08-2018 04:04:47 PM

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
	ll mx=v[0],mn=v[0],ctr=0;
	rep(i,1,n){
		if(v[i]>mx){
			mx = v[i];
			ctr++;
		}
		if(v[i]<mn){
			mn = v[i];
			ctr++;
		}
	}
	cout << ctr << "\n";
	return 0;
}