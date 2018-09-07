/* 
	Author   : Abhinav
   
	Modified : 22-08-2018 10:09:55 PM

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
	ll n,m,t,x,y;
	cin >> n >> m;
	vector<vector<int>> v(n,vector<int>(m));
	rep(i,0,n)
		rep(j,0,m)
			cin >> v[i][j];
	vector<vector<int>> dp(n+1,vector<int>(m+1));
	dp[0][0] = v[0][0];
	rep(i,1,n)
		dp[0][i] = dp[0][i-1] + v[0][i];
	rep(i,1,m)
		dp[i][0] = dp[i-1][0] + v[i][0];
	rep(i,1,n)
		rep(j,1,m)
			dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + v[i][j];
	/*rep(i,0,n){
		rep(j,0,m)
			cout << dp[i][j] << " ";
		cout << "\n";
	}*/
	cin >> t;
	while(t--){
		cin >> x >> y;
		cout << dp[x-1][y-1] << "\n";
	}
	return 0;
}