/* 
	Author   : Abhinav
   
	Modified : 25-08-2018 03:52:52 PM

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

int main(){
	faster;
	string s;
	cin >> s;
	rep(i,0,s.size())
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
			cout << "YES";
			return 0;
		}
	cout << "NO";
	return 0;
}