/* 
	Author   : Abhinav
   
	Modified : 11-12-2017 12:56:47 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,m;
	cin >> n >> m;
	vi arr(m);
	for(int i = 0; i < m; ++i){
		cin >> arr[i];
	}
	vi coins(n+1,0);
	coins[0] = 1;
	for (int i = 0; i < m ; ++i){
		for (int j = 1; j < n+1; ++j){
			if(j >= arr[i])
				coins[j] += coins[j-arr[i]];
		}
	}
	cout << coins[n];
	return 0;
}