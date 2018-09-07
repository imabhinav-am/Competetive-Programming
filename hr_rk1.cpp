/* 
	Author   : Abhinav
   
	Modified : 16-02-2018 09:32:41 PM

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
	ll n,t;
	cin >> n >> t;
	vi v(n);
	for(i,0,n)
		cin >> v[i];
	sort(v.begin(), v.end());
	ll ctr = 0,j=0;
	while(t>0 && j<n){
		t -= v[j];
		if(t<0)
			break;
		ctr++;
		j++;
	}
	cout << ctr << "\n";
	return 0;
}