/* 
	Author   : Abhinav
   
	Modified : 18-08-2018 09:29:49 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n,q,x,y,mid,rw,z;
	cin >> n >> q;
	if(n%2==0)
		mid = (n*n)/2;
	else
		mid = n*n/2 +1;
	//cout << mid << "\n";
	while(q--){
		cin >> x >> y;
		if(x%2!=0){
			rw = (x-1)/2
			rw = rw*n;
			//cout << "rw " << rw << "\n";
			if(y%2==0)
				z = y/2;
			else
				z = y/2 + 1;
			if((x+y)%2==0)
				cout << rw + z << "\n";
			else
				cout << mid+rw+z << "\n";
		}
		else{
			rw = (x-2)/2;
			rw = rw*n;
			if(n%2==0)
				rw += n/2;
			else
				rw += n/2+1;
			if(y%2==0)
				z = y/2;
			else
				z = y/2 + 1;
			//cout << "rw " << rw << "\n";
			if((x+y)%2==0)
				cout << rw + z << "\n";
			else if(n%2==0)
				cout << mid+rw+z << "\n";
			else
				cout << mid+rw+z-1 << "\n";
		}
	}
	return 0;
}