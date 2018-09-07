/* 
	Author   : Abhinav
   
	Modified : 14-12-2017 08:17:59 PM

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
	vi v(n);
	for(i,0,n)
		cin >> v[i];
	ll i=0, ctr = 0;
	while(i < v.size()-1){
		if(v[i] % 2 != 0){
			v[i]+=1;
			v[i+1]+=1;
			i++;
			ctr+=2;
		}
		else{
			i++;
		}
	}
	i = 0;
	int flag = 0;
	while(i < v.size()){
		if(v[i] %2 != 0){
			flag = 1;
			break;
		}
		i++;
	}
	if(flag == 1)
		cout << "NO";
	else
		cout << ctr;
	return 0;
}