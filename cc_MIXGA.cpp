/* 
	Author   : Abhinav
   
	Modified : 19-08-2018 11:22:20 PM

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

int main(){
	faster;
	ll t,n,k,ans;
	cin >> t;
	while(t--){
		cin >> n >> k;
		vi v(n);
		rep(i,0,n)
			cin >> v[i];
		ans = 0;
		rep(i,0,n){
			if(i%2==0){
				if(abs(ans-k)<abs((-1)*ans-k))
					ans += v[i];
				else
					ans -= v[i];
			}
			else{
				if(abs(ans-k)>abs((-1)*ans-k))
					ans += v[i];
				else
					ans -= v[i];	
			}
		}
		if(abs(ans)>=k)
			cout << "1\n";
		else
			cout << "2\n";
	}
	return 0;
}