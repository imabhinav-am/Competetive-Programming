/* 
	Author   : Abhinav
   
	Modified : 29-08-2018 01:51:26 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;
typedef pair<int,int> PII;

#define faster  ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define PB push_back 
#define MP make_pair
# define INF 0x3f3f3f3f

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll rec(vi v,ll x){
	if(x<0)
		return 0;
	if(x==0)
		return v[0];
	if(x==1)
		return max(v[0],v[1]); 
	return max(v[x]+rec(v,x-2),rec(v,x-1));
}

int main(){
	faster;
	ll t,n;
	cin >> t;
	rep(x,1,t+1){
		cin >> n;
		vi v(n);
		rep(i,0,n)
			cin >> v[i];
		vi dp(n+1);
		if(n>0)
		dp[1] = v[0];
		if(n>1){
			dp[2] = max(v[0],v[1]);
			rep(i,2,n)
				dp[i+1] = max(v[i]+dp[i-1],dp[i]);
		}
		if(n==0)
			dp[0] = 0;
		cout <<"Case " << x << ": " << dp[n] << "\n";
	}
	return 0;
}