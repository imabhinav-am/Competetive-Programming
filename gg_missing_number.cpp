/* 
	Author   : Abhinav
   
	Modified : 27-08-2018 11:51:50 PM

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
	ll t,n,res;
	vi ans(10001);
	rep(i,0,10001)
		ans[i] = i+1;
	cin >> t;
	while(t--){
		cin >> n;
		vi v(n-1);
		int flag=0;
		rep(i,0,n-1)
			cin >> v[i];
		sort(v.begin(), v.end());
		rep(i,0,n-1){
			if(v[i]!=ans[i]){
				res = ans[i];
				flag=1;
				break;
			}
		}
		if(flag) cout << res << "\n";
		else cout << ans[n-1] << "\n";
	}
	return 0;
}