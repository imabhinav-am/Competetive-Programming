/* 
	Author   : Abhinav
   
	Modified : 14-12-2017 07:54:24 PM

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
	ll t,n,min,temp,max= INT_MIN;
	cin >> t >> n;
	vi space(n);
	for(i,0,n)
		cin >> space[i];
	ll x=0;
	while(x < t){
		min = INT_MAX;
		for(i,0,n){
			temp = abs(x - space[i]);
			if(temp < min){
				min = temp;
			}
		}
		if(min > max)
			max = min;
		x++;
	}
	cout << max;
	return 0;
}