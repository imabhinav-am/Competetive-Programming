/* 
	Author   : Abhinav
   
	Modified : 04-08-2018 01:54:43 AM

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
	ll p,s;
	cin >> p >> s;
	map<ll,set<ll>> m;
	ll t=s;
	for(int x=1; x<=p; x++){
		vi v1(s), v2(s);
		rep(i,0,s)
			cin >> v1[i];
		rep(i,0,s)
			cin >> v2[i];
		map<ll,ll> pr;
		rep(i,0,s)
			pr[v1[i]] = v2[i];
		ll ctr = 0;
		for(auto it=pr.begin(); it!=pr.end();){
			auto it1 = it;
			it++;
			//cout << it1->first << " " << it1->second << "\n";
			if(it != pr.end()){
				//cout << it1->second << " " << it->second << "\n";
				if(it1->second>it->second){
					//cout << it1->second << " " << it->second << "\n";
					ctr++;
				}
			}
		}
		m[ctr].insert(x);
	}
	for(auto it=m.begin(); it!=m.end(); it++){
		//cout << it->first << " ";
		for(auto itr=(it->second).begin(); itr!=(it->second).end(); itr++)
			cout << *itr << "\n";
		//cout << "\n";
	}
	return 0;
}