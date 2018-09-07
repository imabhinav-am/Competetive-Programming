/* 
	Author   : Abhinav
   
	Modified : 04-08-2018 12:22:02 AM

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
	string s1,s2;
	cin >> t;
	while(t--){
		cin >> s1 >> s2;
		if((s1[0] == 'b' || s2[0] == 'b') && (s1[1] == 'o' || s2[1] == 'o') && (s1[2]=='b' || s2[2] == 'b') || 
			(s1[0] == 'o' || s2[0] == 'o') && (s1[1] == 'b' || s2[1] == 'b') && (s1[2]=='b' || s2[2] == 'b') || 
			(s1[0] == 'b' || s2[0] == 'b') && (s1[1] == 'b' || s2[1] == 'b') && (s1[2]=='o' || s2[2] == 'o'))
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}