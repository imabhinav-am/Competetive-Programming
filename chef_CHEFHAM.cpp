/* 
	Author   : Abhinav
   
	Modified : 04-12-2017 11:44:51 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		ll arr[n],res[n],shift_1[n],shift_2[n];
		for(ll i=0; i<n; i++)
			cin >> arr[i];
		ll mid = n/2,j = 0,temp;
		for(ll i=mid; i<n; i++,j++)
			res[j] = arr[i];
		for(ll i=0; i<mid; i++,j++)
			res[j] = arr[i];
		shift_1[0] = arr[n-1];
		shift_2[0] = arr[n-1];
		shift_2[1] = arr[n-2];
		for(ll i=0; i<n-1; i++){
			shift_1[i+1] = arr[i];
			if(i < n-2)
				shift_2[i+2] = arr[i];
		}
		ll r=0, s1=0, s2=0;
		for(ll i=0; i<n ;i++){
			if(arr[i] != res[i])
				r++;
			if(arr[i] != shift_1[i])
				s1++;
			if(arr[i] != shift_2[i])
				s2++;
		}
		ll x = max(r,s1);
		ll m = max(x,s2);
		cout << m << "\n";
		if(r == m){
			for(ll i=0; i<n; i++)
				cout << res[i] << " ";
		}
		else if(s1 == m){
			for(ll i=0; i<n; i++)
				cout << shift_1[i] << " ";
		}
		else{
			for(ll i=0; i<n; i++)
				cout << shift_2[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}