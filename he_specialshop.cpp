/* 
	Author   : Abhinav
   
	Modified : 21-07-2018 01:21:27 PM

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
	long double t,n,a,b,pc,pf,temp;
	cin >> t;
	while(t--){
		cin >> n >> a  >> b;
		pc = ceil((b*n)/(a+b));
		pf = floor((b*n)/(a+b));
		cout << min(ll(a*pc*pc + b*(n-pc)*(n-pc)), ll(a*pf*pf + b*(n-pf)*(n-pf))) << "\n";
	}
	return 0;
}