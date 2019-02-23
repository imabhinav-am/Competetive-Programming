/* 
	Author   : Abhinav
   
	Modified : Thursday 21 February 2019 01:53:40 AM IST

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

/*int minCostClimbingStairs(vector<ll>& cost, int i,int n){
	if(i>=n) return 0;
	return min(cost[i]+minCostClimbingStairs(cost,i+1,n),cost[i]+minCostClimbingStairs(cost,i+2,n));
}*/

int minCostClimbingStairs(vector<ll>& cost){
	int n = cost.size();
	int dp[n];
	if(n==1) return cost[0];
	dp[0] = cost[0];
	dp[1] = cost[1];
	for(int i=2; i<n; i++){
		dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
	}	
	return min(dp[n-1],dp[n-2]);
}


int main(){
	faster;
	ll n;
	cin >> n;
	vi v(n);
	rep(i,0,n)
		cin >> v[i];
	//cout << min(minCostClimbingStairs(v, 0, n),minCostClimbingStairs(v, 1, n));
	cout << minCostClimbingStairs(v);
	return 0;
}