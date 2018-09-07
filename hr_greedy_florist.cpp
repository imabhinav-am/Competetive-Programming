/* 
	Author   : Abhinav
   
	Modified : 13-12-2017 08:56:28 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,k,i;
	cin >> n >> k;
	vector <ll> arr(n);
	for(i=0; i<n; i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	reverse(arr.begin(),arr.end());
	i = 0;
	ll cost = 0,ctr = 0,x = k;
	while(k>0 && i<arr.size()){
		cost += (ctr+1)*arr[i];
		i++;
		k--;
		if(k == 0){
			k = x;
			ctr++;
		}
	}
	cout << cost << "\n";
	return 0;
}