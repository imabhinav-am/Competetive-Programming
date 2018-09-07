/* 
	Author   : Abhinav
   
	Modified : 19-12-2017 09:33:04 PM

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
	ll t,n,a,b,i,ans;
	cin >> t;
	while(t-- >0){
		cin >> n >> a >> b;
		ans = min(a,b)*(n-1);
		cout << ans << " ";
        i = 1;
        while(i <= n){
        	ans += abs(a-b);
        	cout << ans << " ";
        }
        cout << "\n";
	}
	return 0;
}