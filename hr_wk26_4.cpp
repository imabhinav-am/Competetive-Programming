/* 
	Author   : Abhinav
   
	Modified : 08-02-2018 07:52:56 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)
#define forv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n, h_m;
	cin >> n;
	cin >> h_m;
	vi v_h(n-1), v_p(n-1);
	for(i,0,n-1)
		cin >> v_h[i];
	for(i,0,n-1)
		cin >> v_p[i];
	ll t = 1;
	for(i,0,n-1){
		if(v_h[i] > h_m || (v_h[i] <= h_m && v_p[i] < 0 )){
			t += abs(h_m - v_h[i]) + v_p[i] + 1;
			h_m = v_h[i];
		}
		else{
			t++;
		}
	}
	cout << t << "\n";
	return 0;
}