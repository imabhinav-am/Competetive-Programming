/* 
	Author   : Abhinav
   
	Modified : 

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define make_pair mp

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

void remove_dpl(string s, int i){
	if(i==s.size()-1)
		cout << s << "\n";
	if(s[i]==s[i+1])
		s[i]="";
	remove_dpl(s,i+1);
}

int main(){
	faster;
	ll t;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		remove_dpl(s);
	}
	return 0;
}