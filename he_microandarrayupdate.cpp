/* 
	Author   : Abhinav
   
	Modified : 26-07-2018 10:53:21 PM

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
	ll t,n,k,tp,x,y;
	cin >> t;
	while(t--){
		cin >> n >> k;
		tp = n;
		y = INT_MAX;
		while(tp--){
			cin >> x;
			y = min(y,x);
		}
		if(k-y>=0)
			cout << k-y << "\n";
		else
			cout << "0\n";
	}
	return 0;
}