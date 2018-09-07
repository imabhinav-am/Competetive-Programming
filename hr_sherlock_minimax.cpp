/* 
	Author   : Abhinav
   
	Modified : 22-12-2017 12:53:41 AM

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
	ll n,m,p,max,min,ans=0;
	cin >> n;
	vi v(n);
	for(i,0,n)
		cin >> v[i];
	sort(v.begin(), v.end());
	cin >> m >> p;
	min = abs(m-v[0]);
	ans = m;
	for(i,m,p+1){
		for(j,0,n-1){
			if(abs(v[j+1]-i) > abs(v[j]-i)){ 
				if(abs(v[j]-i) > min){
					min = abs(v[j]-i);
					ans = i;
				}
				break;	
			}
		}
	}
    cout << ans;
	return 0;
}