/* 
	Author   : Abhinav
   
	Modified : 13-06-2018 02:18:38 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>=k; i--)

ll sumSub(string s){
	ll ans=0,one=1,n=s.size();
	repv(i,n-1,0){
		ans = (ans + (s[i] - '0')*(i+1)*one)%mod;
		//cout << (s[i] - '0')*(i+1)*one << "\n";
		one = (10*one+1)%mod; 
	}
	return ans;
}

int main(){
	faster;
	string s;
	cin >> s;
	cout << sumSub(s);
	
	return 0;
}