/* 
	Author   : Abhinav
   
	Modified : 26-08-2018 03:24:36 AM

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
	ll n,m;
	cin >> n >> m;
	vi v(n);
	rep(i,0,n)
		cin >> v[i];
	sort(v.begin(), v.end());
	int i=0,ans=0;
	while(m--){
		if(ans-v[i]>=ans)
			ans -= v[i];
		i++;
	}
	cout << ans;
	return 0;
}