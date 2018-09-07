/* 
	Author   : Abhinav
   
	Modified : 26-12-2017 11:17:59 PM

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
	cin >> s;
	ll temp;
	ll i=0,ans=0;
	while(i < s.size()){
		ll j = i+1;
		ans += s[i]-'0';
		temp = s[i] - '0';
		while(j < s.size()){
			temp = temp*10;
			temp += s[j] - '0';
			ans += temp;
			j++;
		}
		i++;
	}
	cout << ans ;
	return 0;
}