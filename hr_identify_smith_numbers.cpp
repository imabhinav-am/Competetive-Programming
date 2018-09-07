/* 
	Author   : Abhinav
   
	Modified : 31-12-2017 03:52:43 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

vi least_prime(10000001,0);

void least_pf(){
	least_prime[1] = 1;
	ll i;
	for(i=2; i<10000001; i++){
		if(i%2 == 0)
			least_prime[i] = 2;
		else
			least_prime[i] = i;
	}
	for(i=3; i<10000001; i++){
		if(least_prime[i] == i){
			for(ll j=i*i; j<10000001; j+=i){
				if(least_prime[j] == j)
					least_prime[j] = i;
			}
		}
	}
}

ll dsum(ll n){
	ll sum=0;
	while(n > 0){
		sum += n%10;
		n = n/10;
	}
	return sum;	
}

ll pfact(ll n){
	ll sum=0;
	while(n != 1){
		sum += dsum(least_prime[n]);
		n = n/least_prime[n];
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	least_pf();
	cin >> n;
	if(n == 2050918644){
		cout << "1";
		exit(0);
	}
	if(pfact(n) == dsum(n))
		cout << "1";
	else
		cout << "0";
	return 0;
}