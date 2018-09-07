/* 
	Author   : Abhinav
   
	Modified : 23-01-2018 03:54:44 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)
#define forv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n,pos,l,r,res;
	cin >> n >> pos >> l >> r;
	if(l==1 && r<n){
		res = abs(pos-r)+1;
		cout << res;
	}
	else if(l>1 && r==n){
		res = abs(pos-l)+1;
		cout << res;
	}
	else if(l == 1 && r == n){
		cout << "0";
	}
	else{
		res = r-l + min(abs(pos-l),abs(pos-r)) + 2;
		cout << res;
	}
	return 0;
}