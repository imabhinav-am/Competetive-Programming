/* 
	Author   : Abhinav
   
	Modified : 02-09-2018 12:35:50 AM

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
	ll t,n;
	cin >> t;
	rep(i,1,t+1){
		cin >> n;
		ll x= n-1;
		cout << "Case "<< i << ": ";
		bool flag = true;
		while(!(n&1))
			n = n >> 1;
		cout << n << "\n";
	}
	return 0;
}