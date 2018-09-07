/* 
	Author   : Abhinav
   
	Modified : 07-02-2018 12:28:05 AM

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
	ll n, m=0, ctr=0;
	cin >> n;
	vi v(n),t(n);
	for(i,0,n){
		cin >> v[i];
		if(v[i]==1)
			m++;
		if(i>0){
			if(v[i-1]==1){
				v[i-1] = 0;
				v[i] = 0;
				ctr++;
			}
		}
		if(i == n-1){
			if(v[i] == 1)
				ctr++;
		}
	}
	cout << ctr << " " << m << "\n";
	return 0;
}