/* 
	Author   : Abhinav
   
	Modified : 14-12-2017 07:14:08 PM

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
	ll n,k,temp=1,ctr=0,res=0;
	cin >> n >> k;
	vi book(n);
	for(i,0,n)
		cin >> book[i];
	ll i=0;
	while(i < book.size()){
		ctr++;
		while(temp <= book[i]){
			if(ctr == temp)
				res++;
			if(temp%k == 0)
				break;
			temp++;
		}
		if(temp < book[i]){
			temp++;
			continue;
		}
		else{
			temp = 1;
			i++;
		}
	}
	cout << res << '\n';
	return 0;
}