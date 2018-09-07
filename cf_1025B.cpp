/* 
	Author   : Abhinav
   
	Modified : 

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define make_pair mp

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)
#define MAXN   100001
 
ll spf[MAXN];
 
void sieve(){
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;
 
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++){
        if (spf[i] == i){
            for (int j=i*i; j<MAXN; j+=i)
 			    if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 
vector<ll> fct(ll x){
    vector<ll> ret;
    while (x != 1){
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}


int main(){
	faster;
	ll t,a,b,c,d,ac,ad,bc,bd;
	cin >> t;
	cin >> a >> b;
	t--;
	while(t--){
		cin >> c >> d;
		ac = __gcd(a,c);
		ad = __gcd(a,d);
		bc = __gcd(b,c);
		bd = __gcd(b,d);
	}
	return 0;
}