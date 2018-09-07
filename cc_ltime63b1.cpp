/* 
	Author   : Abhinav
   
	Modified : 25-08-2018 07:39:38 PM

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
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vi v(n);
		rep(i,0,n)
			cin >> v[i];
		sort(v.begin(), v.end());
		ll diff = INT_MAX;
		for(int i=0; i<n-1;i++){
			if(abs(v[i+1]-v[i])<diff)
				diff=abs(v[i+1]-v[i]);
			if(diff==0)
				break;
		}
		cout << diff << "\n";
	}
	return 0;
}