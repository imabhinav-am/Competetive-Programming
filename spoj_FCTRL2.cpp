/* 
	Author   : Abhinav
   
	Modified : 11-08-2018 03:54:02 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

vector<int> mul(vector<int> res, int x){
	int cry = 0,pd=1;
	for(int i=0; i<res.size(); i++){
		pd = res[i]*x + cry;
		res[i] = pd%10;
		cry = pd/10;
	}
	while(cry){
		res.emplace_back(cry%10);
		cry = cry/10;
	}
	return res;
}

vector<int> fact(ll n){
	vector<int> res;
	res.emplace_back(1);
	for(int i=2; i<=n; i++){
		res = mul(res,i);
	}
	return res;
}

int main(){
	faster;
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<int> ans(fact(n));
		for(int i=ans.size()-1; i>=0; i--)
			cout << ans[i];
		cout << "\n";
	}
	return 0;
}