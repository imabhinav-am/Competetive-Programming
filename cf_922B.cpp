/* 
	Author   : Abhinav
   
	Modified : 15-02-2018 12:07:57 AM

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
	ll n;
	cin >> n;
	ll ctr = 0;
	for(i,1,n+1){
		for(j,i,n+1){
			ll x = i^j;
			if(x<=n && x>=j && i+j>x){
				ctr++;
			}
		}
	}
	cout << ctr;
	return 0;
}