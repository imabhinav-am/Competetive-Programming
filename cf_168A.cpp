/* 
	Author   : Abhinav
   
	Modified : 26-08-2018 04:09:10 AM 

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
	ll n,x,y;
	cin >> n >> x >> y;
	ll req = ceil((long double)(y*n)/100);
	(req-x)>0?cout<<req-x:cout<<"0";
	return 0;
}