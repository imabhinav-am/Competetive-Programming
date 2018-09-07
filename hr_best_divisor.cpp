/* 
	Author   : Abhinav
   
	Modified : 18-12-2017 11:27:52 PM

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
	ll n,temp,sum,max = 0,ans;
	cin >> n;
	for(i,1,n+1){
		if(n % i == 0){
			temp = i;
			sum = 0;
			while(temp > 0){
				sum += temp % 10;
				temp = temp / 10;
			}
			if(sum > max){
				max = sum;
				ans = i;
			} 
		}
	}
	cout << ans;
	return 0;
}