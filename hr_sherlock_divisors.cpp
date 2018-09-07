/* 
	Author   : Abhinav
   
	Modified : 26-12-2017 01:00:42 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,i,ctr,x;
	cin >> t;
	while(t--){
		cin >> n;
		i = 2,x=2,ctr=0;
		while(i<=sqrt(n)){
			if(n%i == 0)
				ctr++;
			if(i != n/i && i%2 == 0)
				ctr++;
            i = 2*x;
            x++;
		}
		cout << ctr << "\n";
	}
	return 0;
}