/* 
	Author   : Abhinav
   
	Modified : 16-12-2017 11:33:59 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

int super_digit(ll n){
	if(n%10 == n && n/10 == 0)
		return n;
	ll sum = 0;
	while(n>0){
		sum += n%10;
		n = n/10;
	}
	super_digit(sum);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll k,sum=0;
	string num;
	cin >> num >> k;
	ll i=0;
	while(i < num.size()){
		sum += num[i]-'0';
		i++;
	}
	sum = sum*k;
	cout << super_digit(sum);
	return 0;
}