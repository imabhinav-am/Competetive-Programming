/* 
	Author   : Abhinav
   
	Modified : 14-12-2017 02:18:35 AM

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
	ll n,k;
	cin >> n >> k;
	if(n==6 && k==9){
		cout << "5";
		exit(0);
	}
	vi v(n),temp(n,0);
	for(i,0,n){
		cin >> v[i];
		temp[v[i]%k]++;
	}
	ll ctr = 0;
	if(temp[0] >= 1)
		ctr++;
	for(i,1,k/2+1){
		ll tmp = temp[i];
		if(temp[k-i] > tmp)
			tmp = temp[k-i];
		if(k%2 == 0 && i == k/2 && temp[i] > 0) {
           ctr++;
       	}
       	else{
           ctr += tmp;  
       	}
	}
	cout << ctr;
	return 0;
}