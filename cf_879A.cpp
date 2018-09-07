/* 
	Author   : Abhinav
   
	Modified : 22-03-2018 11:24:32 PM

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
	ll n,s,d,ans=0;
	cin >> n;
	while(n--){
		cin >> s >> d;
		while(ans>=s)
			s += d;
		ans = s;
	}
	cout << ans << "\n";
	return 0;
}