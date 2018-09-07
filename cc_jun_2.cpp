/* 
	Author   : Abhinav
   
	Modified : 06-06-2018 11:22:08 PM
*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll ctrops(ll a,ll b){
   if ( a == b ) return 0;
   else if ( b == 0 ) return -1;
   else if ( b == 1 ) return ( a == 0 ? 1 : -1 );

   ll op = __builtin_popcountll(b-1) - __builtin_popcountll(a) + 1;
   return op > 0 ? op : 2;
}

int main(){
	faster;
	ll t, a, b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		cout << ctrops(a,b) << "\n";
	}
}