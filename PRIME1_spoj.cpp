/* 
	Author   : Abhinav
   
	Modified : 28-05-2018 11:58:02 PM
*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll MAX = 10000000;
vi p(MAX,1);

void sieve(){
	p[0] = 0;
	p[1] = 0;
	p[2] = 1;
	for(ll i=3; i*i<MAX; i+=2){
		if(p[i] == 1){
			for(ll j=i*3; j<MAX; j+=i){
				p[j] = 0;
			}
		}
	}
}

int main(){
	faster;
	sieve();
	ll t,m,n;
	cin >> t;
	while(t--){
		cin >> m >> n;
		for(ll i=m; i<=n && i<MAX; i++)
			if(p[i] == 1)
				cout << i << "\n";
		cout << "\n";
	}
	return 0;
}