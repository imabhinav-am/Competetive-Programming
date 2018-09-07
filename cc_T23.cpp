/* 
	Author   : Abhinav
   
	Modified : 19-07-2018 12:21:21 PM

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
		int flag=0;
		rep(i,0,n)
			cin >> v[i];
		sort(v.begin(), v.end());
		rep(i,0,n){
			for(int j=i+1; j<n; j++){
				if(__gcd(v[i],v[j])==1){
					cout << "YES\n";
					flag=1;
					break;
				}
			}
			if(flag)
				break;
		}
		if(!flag)
			cout << "NO\n";
	}
	return 0;
}