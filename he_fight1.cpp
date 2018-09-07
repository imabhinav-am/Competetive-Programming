/* 
	Author   : Abhinav
   
	Modified : 28-07-2018 03:21:04 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll cmpcost(vi arr,ll c){
	ll cost=0;
	for(int i=0; i<arr.size(); i++)
		cost += abs(arr[i]-c);
	return cost;
}

ll tsearch(vi arr){
	sort(arr.begin(), arr.end());
	ll low,high,cost1,cost2;
	low = arr[0];
	high = arr[arr.size()-1];
	while((high-low)>2){
		ll mid1 = low + (high-low)/3;
		ll mid2 = high - (high-low)/3;
		cost1 = cmpcost(arr,mid1);
		cost2 = cmpcost(arr,mid2);
		if(cost1<cost2)
			high = mid2;
		else
			low = mid1;
	}
	//cout << high << " " << low << "\n";
	return cmpcost(arr,(low+high)/2);
}

int main(){
	faster;
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vi v(n);
		rep(i,0,n)
			cin >> v[i];	
		cout << tsearch(v) << "\n";
	}
	return 0;
}