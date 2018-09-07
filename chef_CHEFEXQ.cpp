/* 
	Author   : Abhinav
   
	Modified : 02-12-2017 05:05:50 PM
*/ 
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef vector<ll> vi;
 
const ll mod = 1e9+7;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,q,a,b,c,ans;
	cin >> n >> q;
	ll *arr = new ll[n+1];
	ll *xor_arr = new ll[n+1];
	ll Xor = 0;
	xor_arr[0] = 0;
	for(ll i=1; i<n+1; i++){
		cin >> arr[i];
		Xor = Xor ^ arr[i];
		xor_arr[i] = Xor;
	}
	while(q-- > 0){
		cin >> a >> b >> c;
		ans = 0;
		for(ll i =1 ;i<n+1; i++)
			cout << xor_arr[i] << " ";
		cout << endl;
		if(a == 1){
			arr[b] = c;
			ll Xor = xor_arr[b-1];
			for(ll i=b;i<=n;i++){
				Xor = Xor ^ arr[i];
				xor_arr[i] = Xor;
			}
		}
		else{
			for(ll i=1; i<b+1; i++){
				if(xor_arr[i] == c )
					ans++;
			}
			cout << ans << "\n";
		}
	}
	return 0;
} 