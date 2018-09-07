/* 
	Author   : Abhinav
   
	Modified : 19-07-2018 11:54:31 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	string m,n;
	int t;
	cin >> t;
	while(t--){
		cin >> m >> n;
		ll sum_m=0, sum_n=0;
		rep(i,0,m.size())
			sum_m += (m[i]-'0');
		rep(i,0,n.size())
			sum_n += (n[i]-'0');
		cout << ((sum_m%3)*(sum_n%3))%3 << "\n";
	}
	return 0;
}