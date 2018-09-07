/* 
	Author   : Abhinav
   
	Modified : 29-12-2017 03:17:09 PM

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
	string s;
	ll t;
	cin >> t;
	while(t--){
		cin >> s;
		if(s.size()%2 != 0){
			cout << "-1\n";
			continue;
		}
		ll mid = s.size()/2;
		vi freq1(26,0),freq2(26,0);
		for(i,0,mid)
			freq1[s[i]-'a']++;
		for(i,mid,s.size())
			freq2[s[i]-'a']++;
		ll ctr = 0;
		for(i,0,26){
			if(freq2[i] - freq1[i] > 0)
				ctr+= freq2[i] - freq1[i];
		}
		cout << ctr << "\n";
	}
	return 0;
}