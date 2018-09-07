/* 
	Author   : Abhinav
   
	Modified : 22-12-2017 04:59:14 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

ll great_xor(ll n){
	ll temp,i=1;
	if(n == 1)
		return 0;
	while(1){
		if(n > pow(2,i) && n< pow(2,i+1) ){
			temp = pow(2,i);
			break;
		}
		if(n == pow(2,i))
			break;
		i++;
	}
	if(n == pow(2,i))
		return n-1;
	else{
		return (temp-1-(n%temp));
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,t;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		cout << great_xor(n) << "\n";
	}
	return 0;
}