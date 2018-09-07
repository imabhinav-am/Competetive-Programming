/* 
	Author   : Abhinav
   
	Modified : 15-12-2017 07:28:16 PM

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
	ll n,j;
	cin >> n;
	vi arr(n),b,c;
	for(i,0,n)
		cin >> arr[i];
	for(k,0,arr.size()){
		for(i,0,arr.size()-k){
			j = i+k;
			b.emplace_back(*max_element(arr.begin()+i,arr.begin()+j+1));
		}
	}
	for(k,0,b.size()){
		for(i,0,b.size()-k){
			j = i+k;
			c.emplace_back(*max_element(b.begin()+i,b.begin()+j+1));
		}
	}
	ll sum = 0;
	for(i,0,c.size())
		sum += c[i];
	cout << sum;
	return 0;
}