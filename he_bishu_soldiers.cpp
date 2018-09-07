/* 
	Author   : Abhinav
   
	Modified : 08-08-2018 01:31:59 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

/*ll bsearch(vi v,ll l, ll h, ll k){
	ll sum=0,ctr=0;
	while(l<=h){
		ll m = (l+h)/2;
		if(v[m]<k)
			l = m+1;
		else if(v[m]>k)
			h = m-1;
		else
			return m;
	}
	return -1;
}*/

int main(){
	faster;
	ll n,q,x,sum,k;
	cin >> n;
	vi v(n);
	rep(i,0,n)
		cin >> v[i];
	sort(v.begin(), v.end());
	//rep(i,0,n)
	//	cout << v[i] << " ";
	//cout << "\n";
	cin >> q;
	while(q--){
		cin >> x;
		sum = 0;
		ll ctr = 0;
		rep(i,0,n){
			if(v[i]>x)
				break;
			ctr++;
			sum += v[i];
		}
		cout << ctr << " " << sum << "\n";
	}
	return 0;
}