/* 
	Author   : Abhinav
   
	Modified : 12-06-2018 12:17:17 AM

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
	ll a,b;
	cin >> a >> b;
	a=max(a,b);
	b=min(a,b);
	if((a-b)%10 == 9)
		cout << a-b-1 << "\n";
	else
		cout << a-b+1 << "\n";
	return 0;
}