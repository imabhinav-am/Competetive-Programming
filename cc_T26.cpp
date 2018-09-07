/* 
	Author   : Abhinav
   
	Modified : 19-07-2018 05:45:18 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>=k; i--)

int main(){
	faster;
	ll n,m,l,r,q,k;
	cin >> n >> m;
	vi start(n+1,0), end(n+1,0);
	while(m--){
		cin >> l >> r;
		start[l]++;
		end[r]++;
	}
	vi v(n+1,0);
	v[1] = start[1];
	ll mx=v[1];
	rep(i,2,n+1){
		v[i] = v[i-1] + start[i] - end[i-1];
		if(v[i]>mx)
			mx=v[i];
	}
	vi freq(mx+1,0);
	rep(i,1,n+1)
		freq[v[i]]++;
	repv(i,mx-1,0)
		freq[i] += freq[i+1];
	cin >> q;
	while(q--){
		cin >> k;
		if(k>mx)
			cout << "0\n";
		else
			cout << freq[k] << "\n";
	}
	return 0;
}