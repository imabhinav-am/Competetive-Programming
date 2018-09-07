/* 
	Author   : Abhinav
   
	Modified : 28-07-2018 04:29:48 PM

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
	for(int x=1; x<=t; x++){
		cin >> n;
		vi v(n);
		map<ll,ll> m;
		rep(i,0,n){
			cin >> v[i];
			m[v[i]]++;
		}
		sort(v.begin(), v.end());
		ll mx = v[n-1],ctr=0,pp;
		rep(i,0,n){
			if(m[v[i]]>1){
				ctr++;
				continue;
			}
			if(v[i]!=1 && m[1]>=1){
				ctr++;
				continue;
			}
			if(v[i]==1 && m[1]>1){
				ctr++;
				continue;
			}
			if(v[i]!=1){
				pp = pow(v[i],2);
				for(int j=2; pp<=mx; j++){
					if(m[pp]){
						ctr++;
						break;
					}
					pp = pow(v[i],j+1);
				}
			}
		}
		cout <<"Case " << x << ": " << ctr << "\n";
	}
	return 0;
}