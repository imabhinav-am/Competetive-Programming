/* 
	Author   : Abhinav
   
	Modified : 14-12-2017 01:52:29 AM

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
	ll t,ny,nx;
	cin >> t;
	while(t-- > 0){
		cin >> ny >> nx;
		vi y(ny-1),x(nx-1);
		for(i,0,ny-1)
			cin >> y[i];
		sort(y.begin(), y.end());
		reverse(y.begin(), y.end());
		for(i,0,nx-1)
			cin >> x[i];
		sort(x.begin(), x.end());
		reverse(x.begin(), x.end());
		ll ix=0,iy=0,sx=1,sy=1,cost=0;
		while(iy < y.size() && ix < x.size()){
			if(y[iy] >= x[ix]){
				cost += y[iy]*sx;
				sy++;
				iy++; 
			}
			else{
				cost += x[ix]*sy;
				sx++;
				ix++;	
			}
		}
		while(iy < y.size()){
			cost += y[iy]*sx;
			sy++;
			iy++;
		}
		while(ix < x.size()){
			cost += x[ix]*sy;
			sx++;
			ix++;
		}
		cout << cost%mod << "\n";
	}
	return 0;
}