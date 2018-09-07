/* 
	Author   : Abhinav
   
	Modified : 13-06-2018 11:22:21 PM

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
	ll t;
	int temp;
	string j,s;
	cin >> t;
	while(t--){
		cin >> j >> s;
		ll ctr=0;
		rep(l,0,j.size()){
			rep(m,0,s.size()){
				if(j[l] == s[m]){
					ctr++;
					s[m] = '0';
				}
			}
		}
		cout << ctr << "\n";
	}
	return 0;
}