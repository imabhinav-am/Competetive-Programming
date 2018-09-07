/* 
	Author   : Abhinav
   
	Modified : 02-08-2018 09:26:21 PM

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
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vi v(n);
		ll m=1;
		rep(i,0,n){
			cin >> v[i];
		}
		ll ctr=0,flag;
		rep(i,0,n){
			flag = 0;
			rep(j,i+1,n){
				if(__gcd(v[i],v[j])!=1){
					flag = 1;
					break;
				}
			}
			if(flag == 0)
				ctr++;
		}
		//cout << ctr << "\n";
		cout << (ctr%mod*(ctr-1)%mod)%mod << "\n";
	}
	return 0;
}