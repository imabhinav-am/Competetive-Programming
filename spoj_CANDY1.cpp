/* 
	Author   : Abhinav
   
	Modified : 22-08-2018 05:53:06 PM

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
	while(n!=-1){
		vi v(n);
		ll sum = 0;
		rep(i,0,n){
			cin >> v[i];
			sum += v[i];
		}
		if(sum%n==0){
			ll res = sum/n,ctr=0;
			rep(i,0,n){
				if(v[i]<res)
					ctr += res - v[i]; 
			}
			cout << ctr << "\n";
		}
		else{
			cout << "-1\n";
		}
		cin >> n;
	}
	return 0;
}