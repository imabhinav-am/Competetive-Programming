/* 
	Author   : Abhinav
   
	Modified : 08-08-2018 12:50:20 AM

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
	ll n,q;
	int ch,l,r;
	cin >> n >> q;
	vi v(n);
	rep(i,0,n)
		cin >> v[i];
	while(q--){
		cin >> ch;
		if(!ch){
			cin >> l >> r;
			if(v[r-1]==1)
				cout << "ODD\n";
			else
				cout << "EVEN\n";
		}
		else{
			cin >> l;
			v[l-1]=(!v[l-1]);
		}
	}
	return 0;
}