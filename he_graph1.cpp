/* 
	Author   : Abhinav
   
	Modified : 23-01-2018 04:38:39 PM

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
	ll m,n,a,b,q;
	cin >> n >> m;
	vector< vi> v(n+1,vi(n+1,0));
	while(m--){
		cin >> a >> b;
		v[a][b] = 1;
	}
	cin >> q;
	while(q--){
		cin >> a >> b;
		if(v[a][b] == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}