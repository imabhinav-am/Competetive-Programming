/* 
	Author   : Abhinav
   
	Modified : 05-08-2018 01:10:33 AM

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
	ll t,n,k;
	cin >> t;
	rep(x,1,t+1){
		cin >> n >> k;
		cout << "Case #" << x << ": ";
		//case 1
		if(n==2){
			cout << "0\n";
			cout << "1 " << n << " " << "1\n";
		}// case 2
		else if(n>=k){
			ll ans = (k*(k-1))/2 - k;
			if(ans<0){
				cout << "0\n";
				cout << "1 " << n << " " << "1\n";
				continue;	
			}
			cout << ans << "\n";
			cout << "1 " << n << " " << k << "\n";
			int pos = 1, w = k-1;
			while(w>=1){
				cout << pos << " " << pos+1 << " " << w << "\n";
				w--;
			}
		}
		else{
			ll ans = ((n-1)*k) - (n*(n-1))/2 - k;
			cout << ans << "\n";
			cout << "1 " << n << " " << k << "\n";
			int pos = 1, w = k-1;
			while(w>=(k-n+1)){
				cout << pos << " " << pos+1 << " " << w << "\n";
				w--;
			}
		}
	}
	return 0;
}