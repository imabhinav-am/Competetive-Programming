/* 
	Author   : Abhinav
   
	Modified : 29-12-2017 10:41:54 PM
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
	ll t,x,y;
	vi arx,ary;
	long double d = 0.000000;
	cin >> t;
	while(t--){
		cin >> x >> y;
		arx.emplace_back(x);
		ary.emplace_back(y);
	}
	sort(arx.begin(), arx.end());
	sort(ary.begin(), ary.end());
	ll fx,ex,fy,ey;
	fx = arx[0];
	fy = ary[0];
	ex = arx[arx.size()-1];
	ey = ary[arx.size()-1];
	if(abs(fx-ex) > abs(fy-ey))
		d = abs(fx-ex);
	else 
		d = abs(fy-ey);
	if(d < sqrt(fx*fx + fy*fy))
		d = sqrt(fx*fx + fy*fy);
	if(d < sqrt(ex*ex + fy*fy))
		d = sqrt(ex*ex + fy*fy);
	if(d < sqrt(fx*fx + ey*ey))
		d = sqrt(fx*fx + ey*ey);
	if(d < sqrt(ex*ex + ey*ey))
		d = sqrt(ex*ex + ey*ey);
	cout << showpoint << fixed << setprecision(7) << d;
	return 0;
}