/* 
	Author   : Abhinav
   
	Modified : 22-12-2017 02:22:21 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

ll find_xor(ll num){
	ll n = num % 8;
	switch(n){
		case 0 :
		case 1 :	return num;break;
		case 2 :	
		case 3 :	return 2;break;
		case 4 :
		case 5 :	return num+2;break;
		case 6 :
		case 7 :	return 0;break;
	}
    return num;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,l,r,x;
	cin >> n;
	while(n-- > 0){
		cin >> l >> r;
		cout << (find_xor(l-1)^find_xor(r)) << "\n";
	}
	return 0;
}