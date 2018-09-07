/* 
	Author   : Abhinav
   
	Modified : 01-09-2018 01:35:30 AM 

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
	ll t,x,n;
	cin >> t;
	while(t--){
		cin >> x;
		if(x&1){
			cout << x << "\n";
			continue;
		}
		n = x;
		ll ct=0;
		while(n){
			n = n>>1;
			ct++;
		}
		ll ans=0,k=1;
		n = x;
		while(n){
			if(n&1){
				//cout << ct << " " << k << "\n"; 
				ans += pow(2,ct-k);
			}
			n = n>>1;
			k++;
		}
		cout << ans << "\n";
	}
	return 0;
}