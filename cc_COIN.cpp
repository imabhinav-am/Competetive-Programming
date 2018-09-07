/* 
	Author   : Abhinav
   
	Modified : 14-06-2018 12:09:41 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

map<ll,ll> m;

ll maxprofit(ll n){
	if(n>=n/2+n/3+n/4)
		return n;
	if(m.find(n)!=m.end())
		return m[n];
	ll ans = maxprofit(n/2) + maxprofit(n/3) + maxprofit(n/4);
	m.insert(make_pair(n,ans));
	return ans;
}

int main(){
	faster;
	ll n;
	while(cin >> n){
		cout << maxprofit(n) << "\n";
	}
	return 0;
}