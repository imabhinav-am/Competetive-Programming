/* 
	Author   : Abhinav
   
	Modified : 30-08-2018 12:13:47 AM

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

int main(){
	faster;
	ll n,m,k,x,y;
	double a,b,c;
	cin >> n >> m;
	vector<vector<bool>> v(n+1,vector<bool>(m+1,false));
	cin >> k;
	while(k--){
		cin >> x >> y;
		v[x][y] = true;
	}
	double dp[2][m+1];
	dp[0][0] = 0;
	for(int j=0; j<=m; j++)
		dp[0][j] = j*100;
	for(int i=1; i<=n; i++){
		dp[1][0] = dp[0][0] + 100;
		for(int j=1; j<=m; j++){
			a = INF, b=INF, c=INF;
			a = dp[0][j] + 100;
			b = dp[1][j-1] + 100;
			if(v[i][j])
				c = dp[0][j-1] + 100*sqrt(2);
			dp[1][j] = min(a,min(b,c));
		}
		for(int j=0; j<=m; j++)
			dp[0][j] = dp[1][j];
	}
	cout << round(dp[1][m]) << "\n";
	return 0;
}