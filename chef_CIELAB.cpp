/* 
	Author   : Abhinav
   
	Modified : 06-12-2017 10:52:39 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll num1,num2,digit;
	cin >> num1 >> num2;
	ll ans = num1 - num2;
	ll temp = ans;
	ans = 0;
	int i=1;
	while(temp > 0){
		digit = temp%10;
		if(i == 1){
			if(digit < 9)
				digit++;
			else
				digit = 1;
		}
		ans = ans + digit*i;
		temp = temp/10;
		i*=10;
	}
	cout << ans;
	return 0;
}