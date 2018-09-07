/* 
	Author   : Abhinav
   
	Modified : 12-06-2018 01:11:09 AM

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
	ll t,mid;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		mid = s.size()/2;
		vi v1(26,0),v2(26,0);
		rep(i,0,mid)
			v1[s[i]-'a']++;
		if(s.size()%2 != 0)
			mid++;
		rep(i,mid,s.size())
			v2[s[i]-'a']++;
		if(v1 == v2)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}