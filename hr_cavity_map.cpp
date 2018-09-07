/* 
	Author   : Abhinav
   
	Modified : 14-12-2017 08:32:29 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	vector <string> v(n);
	for(i,0,n)
		cin >> v[i];
	for(i,1,n-1){
		for(j,1,v[i].size()-1){
			if( v[i].at(j) > v[i-1].at(j) && 
				v[i].at(j) > v[i].at(j+1) &&
				v[i].at(j) > v[i+1].at(j) &&
				v[i].at(j) > v[i].at(j-1))
				v[i].at(j) = 'X';
		}
	}
	for(i,0,n)
		cout << v[i] << "\n";
	return 0;
}