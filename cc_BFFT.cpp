/* 
	Author   : Abhinav
   
	Modified : 19-08-2018 11:06:55 PM
*/ 
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;
 
#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define make_pair mp
 
const ll mod = 1e9+7;
 
#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)
 
int main(){
	faster;
	ll t,n,temp,ans;
	cin >> t;
	while(t--){
		cin >> n;
		ll ctr3=0;
		while(ctr3<3){
			temp = ++n;
			ctr3=0;
			while(temp>0){
				if(temp%10==3)
					ctr3++;
				temp /= 10;
			}
		}
		cout << n << "\n";
	}
	return 0;
} 