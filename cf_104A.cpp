/* 
	Author   : Abhinav
   
	Modified : 25-08-2018 03:35:33 PM

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
	ll n;
	cin >> n;
	if(n<=10) cout << "0\n";
	else if((n>=11&&n<=19)||n==21) cout <<"4\n";
	else if(n==20) cout << "15\n";
	else cout << "0\n";
	return 0;
}