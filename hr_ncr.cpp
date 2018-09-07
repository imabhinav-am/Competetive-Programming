/* 
	Author   : Abhinav
   
	Modified : 25-12-2017 01:54:32 AM

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
	ll t,n,val;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		val = 1;
		for(i,0,n+1){
            cout << " " << val;
            val = val * (n - i) / (i + 1);
        }
        cout << "\n";
	}	
	return 0;
}