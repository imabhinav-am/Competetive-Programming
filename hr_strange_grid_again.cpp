/* 
	Author   : Abhinav
   
	Modified : 23-12-2017 12:47:41 AM

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
	ll r,c;
	cin >> r >> c;
	if(r%2 == 0){
		if((r-2)/2 != 0)
			cout << (r-2)/2;
		if(c == 1)
			cout << "1";
		else 
			cout << c*2-1;
	}
	else{
		if((r-1)/2)
			cout << (r-1)/2;
		if(c == 1)
			cout << "0";
		else 
			cout << (c-1)*2;
	}
	return 0;
}