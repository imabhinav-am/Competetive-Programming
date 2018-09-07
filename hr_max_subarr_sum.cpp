/* 
	Author   : Abhinav
   
	Modified : 26-12-2017 10:18:08 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

void max_sub_sum(vi v){
	ll curr_max=v[0];
	ll max_sum = v[0];
	ll max_subq = 0;
	for(i,1,v.size()){
		curr_max = max(v[i], curr_max+v[i]);
		max_sum = max(max_sum, curr_max);
	}
	cout << max_sum << " ";
	sort(v.begin(), v.end());
	if(v[v.size()-1] < 0){
		cout << v[v.size()-1] << "\n";
		return;
	}
	else{
		ll j=v.size()-1;
		while(v[j] > 0 && j>=0){
			max_subq += v[j];
			j--;
		}
		cout << max_subq << "\n";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vi v(n);
		for(i,0,n)
			cin >> v[i];
		max_sub_sum(v);
	}
	return 0;
}