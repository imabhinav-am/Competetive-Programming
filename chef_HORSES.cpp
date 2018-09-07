/* 
	Author   : Abhinav
   
	Modified : 07-12-2017 12:02:39 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,temp;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		vi arr;
		while(n-- > 0){
			cin >> temp;
			arr.emplace_back(temp);
		}
		sort(arr.begin(), arr.end());
		temp = arr[1] - arr[0];
		for(ll i=2; i< arr.size(); i++){
			if(arr[i] - arr[i-1] < temp)
				temp = arr[i] - arr[i-1];
		}
		cout << temp << "\n";
	}
	return 0;
}