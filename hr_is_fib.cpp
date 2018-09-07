/* 
	Author   : Abhinav
   
	Modified : 25-12-2017 01:41:04 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

vi fib(101,0);

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	fib[1] = 0;
	fib[2] = 1;
	for(i,3,101)
		fib[i] = fib[i-1] + fib[i-2];
	ll n,t;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		if(binary_search(fib.begin(),fib.end(),n))
			cout << "IsFibo\n";
		else
			cout << "IsNotFibo\n";
	}
	return 0;
}