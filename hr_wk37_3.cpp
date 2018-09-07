/* 
	Author   : Abhinav
   
	Modified : 20-04-2018 02:59:29 PM

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
	ll n;
	cin >> n;
	while(n--){
		vi v(26);
		rep(i,0,26)
			cin >> v[i];
		vi sum(26);
		sum[0] = v[0];
		for(int i=1; i<26; i++){
			sum[i] = sum[i-1] + v[i];
		}	
		for(int i=0; i<26; i++){
			cout << sum[i] << " ";	
		}	
		cout << "\n";
	}
	return 0;
}