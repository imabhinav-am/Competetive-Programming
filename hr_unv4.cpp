/* 
	Author   : Abhinav
   
	Modified : 25-02-2018 04:49:31 PM

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
	ll n;
	cin >> n;
	vi v(n);
	map<ll, ll> count;
	rep(i,0,n){
		cin >> v[i];
		count[v[i]]++;
	}
	ll t,i,j;
	cin >> t;
	while(t--){
		cin >> i >> j;
		int ctr = 0,flag = 0;
		rep(x,i-1,j){
			if(count[v[x]] == 1)
				ctr++;
		}
		cout << ctr << "\n";
	}
	return 0;
}