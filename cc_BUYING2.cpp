/* 
	Author   : Abhinav
   
	Modified : 12-06-2018 11:58:15 PM

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
	ll t,n,x,v;
	cin >> t;
	while(t--){
		cin >> n >> x;
		ll m=INT_MAX,sum=0;
		rep(i,0,n){
			cin >> v;
			sum += v;
			if(v<m)
				m=v;
		}
		if(sum/x == (sum-m)/x)
			cout << "-1\n";
		else
			cout << sum/x << "\n";
	}
	return 0;
}