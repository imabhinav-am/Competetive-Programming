/* 
	Author   : Abhinav
   
	Modified : 21-12-2017 11:41:21 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	float n,i;
	cin >> n;
	vi v(n);
	for(i=0;i<n;i++)
		cin >> v[i];
	float e = 0;
	for(i=n-1;i>=0;i--)
		e = ceil((e+v[i])/2);
	cout << e;
	return 0;
}