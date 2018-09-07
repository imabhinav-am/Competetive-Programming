/* 
	Author   : Abhinav
   
	Modified : 23-01-2018 04:50:22 PM

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
	ll n,sum=0;
	cin >> n;
	vi v(n);
	for(i,0,n){
		cin >> v[i];
		sum += v[i];
	}
	if(sum/2 == n-1)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}