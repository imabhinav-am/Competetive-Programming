/* 
	Author   : Abhinav
   
	Modified : 29-08-2018 12:10:45 AM

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
	ll t,x,m,n,ans;
	cin >> t;
	while(t--){
		vi v1,v2;
		ans = 0;
		cin >> x;
		while(x){
			v1.emplace_back(x);
			cin >> x;
		}
		while(1){
			cin >> x;
			while(x){
				v2.emplace_back(x);
				cin >> x;
				//cout << x << "\n";
			}
			if(v2.size()==0) break;
			m=v1.size(), n=v2.size();
			ll dp[m+1][n+1]={0};
			for(int i=0; i<=m; i++){
				for(int j=0; j<=n; j++){
					if(i==0||j==0)
						dp[i][j] = 0;
					else if(v1[i-1]==v2[j-1])
						dp[i][j] = 1 + dp[i-1][j-1];
					else
						dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				}
			}
			//cout << dp[m][n] << "\n";
			ans = max(ans,dp[m][n]);
			v2.clear(); 
		}
		cout << ans << "\n";
	}
	return 0;
}