/* 
	Author   : Abhinav
   
	Modified : 23-02-2018 09:34:35 PM

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
	ll n,m;
	cin >> n >> m;
	vi v(n),t(m);
	for(i,0,n){
		cin >> v[i];
		t[v[i]]++;
	}
	for(i,0,m){
		cout << t[i] << " ";
	}
	return 0;
}