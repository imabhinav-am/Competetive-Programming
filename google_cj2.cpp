/* 
	Author   : Abhinav
   
	Modified : 07-04-2018 04:23:33 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

vi tsort(vi v){
	int flag=0;
	while(!flag){
		flag = 1;
		rep(i,0,v.size()-2){
			if(v[i]>v[i+2]){
				flag = 0;
				swap(v[i],v[i+2]);
			}
		}
	}
	return v;
}

int main(){
	faster;
	ll n,t,T=1;
	cin >> t;
	while(T<=t){
		cin >> n;
		vi tans,v(n);
		rep(i,0,n)
			cin >> v[i];
		tans = tsort(v);
		sort(v.begin(), v.end());
		ll ans = -1;
		rep(i,0,n){
			if(v[i] != tans[i]){
				ans = i;
				break;
			}
		}
		if(ans == -1)
			cout << "Case #" << T << ": OK\n";
		else 
			cout << "Case #" << T << ": " << ans << "\n";
		T++;
	}
	return 0;
}