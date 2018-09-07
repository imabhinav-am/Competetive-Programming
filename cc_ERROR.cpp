/* 
	Author   : Abhinav
   
	Modified : 13-06-2018 11:51:38 PM

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
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		(s.find("101") != string::npos || s.find("010") != string::npos)?cout << "Good\n": cout << "Bad\n";
	}
	return 0;
}