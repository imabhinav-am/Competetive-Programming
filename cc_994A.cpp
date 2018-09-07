/* 
	Author   : Abhinav
   
	Modified : 22-06-2018 11:24:01 PM

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
	ll n,m;
	cin >> n >> m;
	vi vn(n),vm(m),ctrm(10,0);
	rep(i,0,n)
		cin >> vn[i];
	rep(i,0,m){
		cin >> vm[i];
		ctrm[vm[i]]++;
	}
	rep(i,0,n){
		if(ctrm[vn[i]]!=0){
			cout << vn[i] << " ";
			ctrm[vn[i]]--; 
		}
	}
	return 0;
}