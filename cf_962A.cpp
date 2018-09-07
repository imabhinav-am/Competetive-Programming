/* 
	Author   : Abhinav
   
	Modified : 14-04-2018 05:55:48 PM

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
	vi v(n);
	long double sum = 0;
	rep(i,0,n){
		cin >> v[i];
		sum += v[i];
	}
	ll hf=0;
	ll pos;
	rep(i,0,n){
		hf += v[i];
		if(hf >= ceil(sum/2)){
			pos = i;
			break;
		}
	}
	cout << pos+1 << "\n";
	return 0;
}