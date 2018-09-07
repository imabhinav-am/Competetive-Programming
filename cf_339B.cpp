/* 
	Author   : Abhinav
   
	Modified : 26-08-2018 05:38:06 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n,m,pos=1,x,ans=0;
	cin >> n >> m;
	while(m--){
		cin >> x;
		if(x>=pos)	ans += x-pos;
		else	ans += (n-pos) + (x-1) + 1;
		//cout << ans << "\n";
		pos = x;
	}
	cout << ans << "\n";
	return 0;
}