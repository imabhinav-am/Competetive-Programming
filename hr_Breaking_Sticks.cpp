/* 
	Author   : Abhinav
   
	Modified : 15-12-2017 01:53:47 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

ll least_div(ll t){
	ll sqrt_t = floor(sqrt(t));
	ll i=1;
	while(i < sqrt_t){
		i++;
		if(t%i == 0)
			return i;
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    ll n,sum=0,t,d;
    cin >> n ;
    while(n-- > 0){
    	cin >> t;
    	if(t == 1)
    		sum+=1;
    	else{
    		d = least_div(t);
    		while(t>0){
    			if(d == 0){
    				sum += t+1;
    				break;
    			}
    			sum+=t;
    			t=t/d;
    			d = least_div(t);
    		}
    	}
    }
    cout << sum << "\n";
    return 0;
}