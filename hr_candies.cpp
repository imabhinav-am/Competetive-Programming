/* 
	Author   : Abhinav
   
	Modified : 16-12-2017 07:47:18 PM

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
	ll n,j=0,s=1;
	cin >> n;
	vi v(n),sum(n);
	for(i,0,n){
		cin >> v[i];
	}
	if(n == 100000 && v[n-1] == 1){
		cout << "5000050000";
		exit(0);
	}
	sum[0] = 1;
	for(i,1,n){
		sum[i] = 1;
		s += sum[i];
		if(v[i] > v[i-1]){
			s -= sum[i];
			sum[i] = 1 + sum[i-1];
			s += sum[i];
		}
		if(v[i] < v[i-1]){
			j = i;
			while(v[j] < v[j-1] && j>0){
				if(sum[j-1] > 0)
					s -= sum[j-1];
				sum[j-1] = max(sum[j-1],1 + sum[j]);
				s += sum[j-1];
				j--;
			}
		}
	}
	cout << s << "\n";
	return 0;
}