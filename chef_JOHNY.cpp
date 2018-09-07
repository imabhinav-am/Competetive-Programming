/* 
	Author   : Abhinav
   
	Modified : 12-06-2018 12:55:06 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,k,temp,loc;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		vi arr;
		while(n-- > 0){
			cin >> temp;
			arr.emplace_back(temp);
		}
		cin >> k;
		temp = arr.at(k-1);
		sort(arr.begin(), arr.end());
		int i = 0;
		while(i < arr.size()){
			if(arr[i] == temp)
				break;
			i++;
		}
		cout << i+1 << "\n";
	}
	return 0;
}