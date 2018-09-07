/* 
	Author   : Abhinav
   
	Modified : 22-03-2018 11:37:32 PM

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
	ll n,k;
	cin >> n >> k;
	vi v(n);
	rep(i,0,n)
		cin >> v[i];
	ll ans = max(v[0],v[1]), wins = 1;
	for(int i=2; i<n && wins < k; i++){
		if(v[i]<ans) wins++;
		else ans=v[i], wins=1;
	}
	cout << ans;
	return 0;
}