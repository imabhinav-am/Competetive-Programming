/* 
	Author   : Abhinav
   
	Modified : 13-06-2018 11:45:44 PM

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
		rep(i,0,n)
			cin >> v[i];
		ll lctr=0,ctr=0;
		rep(i,0,n-1)
			if(v[i]>v[i+1])
				lctr++;
		rep(i,0,n){
			rep(j,i+1,n)
				if(v[i]>v[j])
					ctr++;
		}
		(lctr==ctr)?cout << "YES\n" : cout << "NO\n";
	}
	return 0;
}