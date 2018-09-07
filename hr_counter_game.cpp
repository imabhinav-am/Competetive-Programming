/* 
	Author   : Abhinav
   
	Modified : 17-12-2017 01:01:10 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

unsigned int countSetBits(ll n)
{
    unsigned int count = 0;
    while (n){
      n &= (n-1) ;
      count++;
    }
    return count;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		if(countSetBits(n-1)&1)
			cout << "Louise\n";
		else
			cout << "Richard\n";
	}
	return 0;
}