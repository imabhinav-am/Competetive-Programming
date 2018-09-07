/* 
	Author   : Abhinav
   
	Modified : 17-12-2017 01:08:36 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll px,py,qx,qy,rx,ry,t;
	cin >> t;
	while(t-- > 0){
		cin >> px >> py >> qx >> qy;
		rx = 2*qx - px;
		ry = 2*qy - py;
		cout << rx << " " << ry << "\n";
	}
	return 0;
}