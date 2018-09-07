/* 
	Author   : Abhinav
   
	Modified : 20-07-2018 04:44:10 PM

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
	ll t,n,k,ct,mxv,mn,amxv;
	cin >> t;
	while(t--){
		cin >> n >> k;
		vi v(n);
		mxv = 0,amxv=0;
		rep(i,0,n)
			cin >> v[i];	
		rep(i,0,n){
			ct += v[i];
			if(ct<=k){
				mxv=1;
				rep(j,i+1,n){
					ct += v[j];
					if(ct <= k)
						mxv++;
					else{
						ct -= v[j];
						break;
					}
				}	
			}
			if(amxv<mxv){
				amxv = mxv;
				mn = k-ct;
			}
			ct = 0;
			mxv = 0;
		}
		cout << amxv << " " << mn << "\n";
	}
	return 0;
}