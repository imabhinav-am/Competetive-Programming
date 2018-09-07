/* 
	Author   : Abhinav
   
	Modified : 13-06-2018 01:23:17 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll maxSum(vi v){
	//if(i==v.size())
		//return 0;
	ll n = v.size();
	//cout << sum << "\n";
	//return sum + max(maxSum(v,i+1,abs(v[i+1]-1)),max(maxSum(v,i+1,abs(v[i]-1)),maxSum(v,i+1,abs(v[i+1]-v[i]))));
	int dp[n][2]={0};
	rep(i,0,n-1){
		dp[i+1][0] = max(dp[i][0], dp[i][1]+abs(v[i]-1));
		dp[i+1][1] = max(dp[i][0]+abs(v[i+1]-1),dp[i][1]+abs(v[i+1]-v[i]));
	}
	return max(dp[n-1][0],dp[n-1][1]);
}

int main(){
	faster;
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vi v(n);
		rep(i,0,n)
			cin >> v[i];
		cout << maxSum(v) << "\n";
	}
	return 0;
}