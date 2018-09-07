/* 
	Author   : Abhinav
   
	Modified : 12-06-2018 11:44:22 PM

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
	ll t,n,v;
	cin >> t;
	while(t--){
		cin >> n;
		ll m = INT_MAX,ctr=0;
		rep(i,0,n){
			cin >> v;
			if(v<=m){
				m=v;
				ctr++;
			}
		}
		cout << ctr << "\n";
	}
	return 0;
}