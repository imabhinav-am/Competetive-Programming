/* 
	Author   : Abhinav
   
	Modified : 23-02-2018 04:45:22 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)
#define forv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<vi> v(2*n,vi(2*n,0));
		for(i,0,2*n)
			for(j,0,2*n)
				cin >> v[i][j];
		ll sum = 0;
		for(i,0,n)
			for(j,0,n)
				sum += max(v[i][j],max(v[2*n-1-i][j],max(v[i][2*n-1-j],v[2*n-1-i][2*n-1-j])));
		cout << sum << "\n";
	}
	return 0;
}