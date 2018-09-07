/* 
	Author   : Abhinav
   
	Modified : 04-08-2018 01:17:40 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll pow(ll x, ll y){
    ll temp;
    if( y == 0)
        return 1;
    temp = pow(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}

int main(){
	faster;
	vi v;
	rep(i,0,40)
		rep(j,i+1,40){
			//cout << i << " " << j << "\n";
			v.emplace_back(ll(pow(2,i)) + ll(pow(2,j)));
			//cout << ll(pow(2,i)) + ll(pow(2,j)) << "\n";
		}
	sort(v.begin(), v.end());
	//rep(i,0,v.size())
	//	cout << v[i] << " ";
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int j;
		if(n==1){
			cout << "2\n";
			continue;
		}
		if(n==2){
			cout << "1\n";
			continue;
		}
		if(n==3){
			cout << "0\n";
			continue;
		}
		rep(i,0,v.size()){
			if(v[i]>=n){
				j=i;
				break;
			}
		}
		//cout << v[j] << "\n";
		cout << min(n-v[j-1],v[j]-n) << "\n";
	}
	return 0;
}