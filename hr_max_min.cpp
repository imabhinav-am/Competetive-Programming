/* 
	Author   : Abhinav
   
	Modified : 14-12-2017 12:12:24 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,k,res=INT_MAX,temp;
	cin >> n >> k;
	vi v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	for(int i=0; i<v.size()-k+1; i++){
		temp = v[i+k-1] - v[i];
		if(temp < res)
			res = temp;
	}
	cout << res ;
	return 0;
}