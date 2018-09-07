/* 
	Author   : Abhinav
   
	Modified : 15-02-2018 10:03:14 PM

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
	ll n,k;
	cin >> n >> k;
	if(k > 100){
		cout << "No";
		exit(0);
	}
	for(i,1,k+1){
		for(j,i+1,k+1){
			if(n%i == n%j){
				//cout << i << " " << j << "\n";
				cout << "No";
				exit(0);
			}
		}
	}
	cout << "Yes";
	return 0;
}