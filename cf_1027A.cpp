/* 
	Author   : Abhinav
   
	Modified : 18-08-2018 08:32:08 PM

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
	ll t,n;
	string s;
	cin >> t;
	while(t--){
		cin >> n;
		char ch_f,ch_l;
		cin >> s;
		int flag = 1;
		rep(i,0,n/2){
			//cout << s[i] << " " << s[n-(i+1)] << " " << s[i]-s[n-(i+1)] << "\n";
			if(!(s[i]==s[n-(i+1)] || s[i]-s[n-(i+1)]==-2 || s[i]-s[n-(i+1)]==2)){
				flag=0;
				break;
			}
		}
		//cout << flag << "\n";
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}