/* 
	Author   : Abhinav
   
	Modified : 05-08-2018 01:22:19 AM
*/ 
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef vector<ll> vi;
 
#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
 
const ll mod = 1e9+7;
 
#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)
 
ll power(ll x, ll y, ll m){
    ll res = 1;      
    x = x % m;  
    while (y > 0){
        if (y & 1){
        	//cout << x << " " << res << "\n";
            res = (res%m*x%m) % m;
            //cout << x << " " << res << "\n";
        }
       y = y>>1;
        x = (x%m*x%m) % m;  
    }
    return res;
}

ll gcd(ll a, ll b){
    if (!a)
       return b;
    return gcd(b%a,a);
}
 
ll reduceB(ll a, char b[]){
    ll md = 0;
    for (int i=0; i<strlen(b); i++)
        md = (md*10 + b[i] - '0')%a;
 
    return md; 
}

ll gcdLarge(ll a, char b[]){
    ll num = reduceB(a, b);
    return gcd(a, num);
}
 
int main(){
	faster;
	ll t,a,b,n;
	cin >> t;
	while(t--){
		cin >> a >> b >> n;
		//cout << ((ll)power(a,n) + (ll)power(b,n)) << " " << abs(a-b) << "\n";
		if(a-b == 0)
			cout << (power(a,n,mod)%mod + power(b,n,mod)%mod)%mod << "\n";
		else
			cout << (gcd((power(a,n,abs(a-b))%(abs(a-b)) + power(b,n,abs(a-b))%(abs(a-b)))%abs(a-b),abs(a-b)))%mod << "\n";
	}
	return 0;
}