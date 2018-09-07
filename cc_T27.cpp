/* 
	Author   : Abhinav
   
	Modified : 20-07-2018 04:31:52 PM

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
		map<ll,ll> m;
		rep(i,0,n){
			cin >> v[i];
		}
		ll ctr=0,temp;
		for(int i=0; i<n; i++){
			temp = v[i]*v[i];
			for(int j=0; j<n; j++){
				m[temp + v[j]*v[j]]++;
			}
		}
		for(int i=0; i<n; i++){
			temp = v[i]*v[i];
			for(int j=0; j<n; j++){
				if(m.find(temp + v[j]) != m.end())
					ctr+=m[temp + v[j]];
			}
		}
		cout << ctr << "\n";
	}
	return 0;
}