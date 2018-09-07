/* 
	Author   : Abhinav
   
	Modified : 01-09-2018 11:59:01 PM

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
	ll t,n,ans;
	cin >> t;
	while(t--){
		cin >> n;
		bool flag = true;
		while(flag){
			ll x = n,tt=0;
			while(x){
				tt += x%10;
				x /= 10;
			}
			if(n%tt==0) {flag = false; ans = n;}
			n++;
		}
		cout << ans << "\n";
	}
	return 0;
}