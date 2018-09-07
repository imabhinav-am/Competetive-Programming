/* 
	Author   : Abhinav
   
	Modified : 26-08-2018 03:52:40 AM

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
	string a,b;
	cin >> a >> b;
	ll n=a.size();
	rep(i,0,n){
		if(a[i]!=b[n-i-1]){
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}