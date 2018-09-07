/* 
  Author   : Abhinav
   
  Modified : 05-08-2018 05:11:19 PM
*/ 
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef vector<ll> vi;
 
#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
 
const ll mod = 1e9+7;

ll aModM(string s, ll mod){
    ll number = 0;
    for (ll i = 0; i < s.length(); i++){
        number = (number*10 + (s[i] - '0'));
        number %= mod;
    }
    return number;
}
 
ll powmod(string &a, ll y,ll m){
    ll res = 1;
    ll x = aModM(a, m);
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

ll reduceB(ll a, string b){
    ll md = 0;
    for (int i=0; i<b.size(); i++)
        md = (md*10 + b[i] - '0')%a;
 
    return md;
}
 
ll gcdLarge(ll a, string b){
    ll num = reduceB(a, b);
    return gcd(a, num);
}
 
int main(){
    faster;
    ll t,n,a,b;
    cin >> t;
    while(t--){
      cin >> a >> b >> n;
      string as = to_string(a), bs = to_string(b);
      if(a-b==0)
        cout << (powmod(as,n,mod)%mod + powmod(bs,n,mod)%mod)%mod << "\n";
      else{
        string s = to_string(powmod(as,n,abs(a-b))%abs(a-b) + powmod(bs,n,abs(a-b))%abs(a-b));
        //cout << s << "\n";
        cout << gcdLarge(abs(a-b),s)%mod << "\n";
      }
    }
    return 0;
}