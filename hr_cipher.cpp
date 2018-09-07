/* 
	Author   : Abhinav
   
	Modified : 23-12-2017 12:14:31 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

ll res[1000001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	ll curr = 0,x=0;
	for(ll i=0; i<n; i++){
		if(i % k == 0 && i!=0){
			curr ^= res[x];
			x++;
		}
		res[i] = (curr ^ (s[i]-'0'));
		cout << res[i];
		curr ^= res[i];
	}
	return 0;
}