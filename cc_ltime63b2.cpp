/* 
	Author   : Abhinav
   
	Modified : 25-08-2018 07:56:11 PM

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
	ll t,n,m;
	string in,res;
	cin >> t;
	while(t--){
		cin >> n >> m;
		string ans;
		while(n--){
			cin >> in >> res;
			if(in=="correct"){
				rep(i,0,res.size())
					if(res[i]=='0'){
						ans = "INVALID";
						break;
					}
			}
			if(in=="wrong" && ans!="INVALID"){
				int ctr=0;
				rep(i,0,res.size()){
					if(res[i]=='1'){
						ctr++;
					}
				}
				if(ctr==res.size())
					ans = "WEAK";
			}
		}
		if(ans.size()==0)
			cout << "FINE\n";
		else
			cout << ans << "\n";
	}
	return 0;
}