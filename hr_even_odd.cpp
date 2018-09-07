/* 
	Author   : Abhinav
   
	Modified : 26-12-2017 12:35:15 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

ll find(ll x,ll y,vi v){
    if(x>y) return 1;
    ll ans = pow(v[x],find(x+1,y,v));
    return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,q,x,y;
	cin >> n;
	vi v(n);
	for(i,0,n)
		cin >> v[i];
	cin >> q;
	while(q--){
		cin >> x >> y; 
		if(y!=x && v[x]==0 && x<n)
			cout << "Odd\n";
		else{
			if(v[x-1]%2 == 0)
				cout << "Even\n";
			else
				cout << "Odd\n";
		}
	}
	return 0;
}