/* 
	Author   : Abhinav
   
	Modified : 19-12-2017 11:26:48 PM

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
	ll t;
	cin >> t;
	ll num = 3;
	while(t > num){
		t = t-num;
		num = num*2;
	}
	cout << num-t+1;
	return 0;
}