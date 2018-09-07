/* 
	Author   : Abhinav
   
	Modified : 19-08-2018 11:43:29 PM

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
	ll t,n,k,kt,x,tp,mx,mn,ans;
	cin >> t;
	while(t--){
		cin >> n >> k >> x;
		kt = k;
		mn = INT_MAX;
		mx = 0;
		ans = 0;
		vi tt;
		while(kt--){
			cin >> tp;
			mx = max(tp,mx);
			mn = min(tp,mn);
			tt.emplace_back(tp);
			ans += tp;
		}
		if(mx-mn==x)
			mx--;
		
		cout << ans << "\n";
	}
	return 0;
}