/* 
	Author   : Abhinav
   
	Modified : 07-07-2018 06:04:13 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n,k,v,t;
	cin >> t;
	rep(x,1,t+1){
		cin >> n >> k >> v;
		v = v%n;
		vector<string> V;
		string s;
		rep(i,0,n){
			cin >> s;
			V.emplace_back(s);
		}
		int ctr=0;
		int l=0;
		rep(i,0,v-1){
			if(l+k<n)
				l += k;
			else{
				l = (l+k)%n;
			}
		}
		vector<string> ans;
		rep(i,l,n){
			ans.emplace_back(V[i]);
			ctr++;
			if(ctr==k)
				break;
		}
		if(ctr<k){
			int j=0;
			while(ctr<k){
				ans.emplace_back(V[j]);
				j++;
				ctr++;
			}
		}
		cout << "Case #" << x << ": ";
		if(v==0)
			for(int i=n-k; i<n; i++)
				cout << V[i] << " ";
		else
			rep(i,0,n){
				if(find(ans.begin(), ans.end(),V[i]) != ans.end())
					cout << V[i] << " ";
			}
		cout << "\n";
	}
	return 0;
}