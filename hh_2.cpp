/* 
	Author   : Abhinav
   
	Modified : 20-01-2018 01:16:53 AM

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
	ll a,b,x,y,t;
	cin >> t;
	while(t--){
		cin >> a >> b >> x >> y;
		if(a != b){
			cout << (x-y) + __gcd(a,b) << " ";
			ll n = __gcd(a,b);
			ll i=0,k1,k2;
			while(1){
				if((n+(b*i))%a==0){
					k1 = (n+(b*i))/a;
					k2 = i;
					break;
				}
				i++;
			}
			if(k1 && k2)
				cout << k1+k2 << "\n";
			else if(k1 || k2)
				cout << 1 << "\n";
			if(k1!=0){
				cout << a*k1 << " ";
			}
			if(k2 != 0){
				cout << b*k2 << " ";
			}
			cout << "\n";
		}
		else{
			cout << abs(x-y) << " " << "2\n";
			cout << a << " " << b << "\n";
		}
	}
	return 0;
}