/* 
	Author   : Abhinav
   
	Modified : 24-08-2018 01:29:45 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define make_pair mp

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n,maxe=INT_MIN,mine=INT_MAX,mini,maxi;
	cin >> n;
	vi v(n);
	rep(i,0,n){
		cin >> v[i];
		if(v[i]>maxe){
			maxe=v[i];
			maxi=i;
		}
		if(v[i]<=mine){
			mine=v[i];
			mini=i;
		}
	}
	//cout << maxe << " " << maxi << " " << mine << " " << mini << "\n";
	if(mini<maxi){
		cout << maxi+(n-1-mini)-1;
	}
	else{
		//cout << "yes\n";
		cout << maxi+(n-1-mini);
	}
	return 0;
}