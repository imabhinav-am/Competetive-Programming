/* 
	Author   : Abhinav
   
	Modified : 16-12-2017 08:02:16 PM

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
	 t1,t2,n,ans;
	cin >> t1 >> t2 >> n;
	for(i,2,n){
		ans = t1 + t2*t2;
		t1 = t2;
		t2 = ans;
	}
	cout << ans << "\n";
	return 0;
}