/* 
	Author   : Abhinav
   
	Modified : 25-08-2018 04:37:26 PM

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
	ll n,x,ctr5=0,ctr0=0;;
	cin >> n;
	rep(i,0,n){
		cin >> x;
		x==5?ctr5++:ctr0++;
	}
	while(ctr5%9!=0)
		ctr5--;
	if(ctr5==0&&ctr0!=0)
		cout << "0\n";
	else if(ctr0!=0&&ctr5%9==0){
		while(ctr5--)
			cout << "5";
		while(ctr0--)
			cout << "0";
	}
	else
		cout << "-1";
	return 0;
}