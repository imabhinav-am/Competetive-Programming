/* 
	Author   : Abhinav
   
	Modified : 11-08-2018 03:15:10 PM

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
	ll n,a,b,c,d;
	map<ll,vi> m;
	cin >> n;
	rep(i,1,n+1){
		cin >> a >> b >> c >> d;
		m[a+b+c+d].emplace_back(i);
	}
	/*for(auto itr=m.begin(); itr!=m.end(); itr++){
		cout << itr->first << " : ";
		for(auto it=(itr->second).begin(); it!=(itr->second).end(); it++)
			cout << *it << " ";
		cout << "\n";
	}*/
	ll ctr=1,flag=0;
	for(auto itr=m.rbegin(); itr!=m.rend(); itr++){
		for(auto it=(itr->second).begin(); it!=(itr->second).end(); it++){
			if(*it==1){
				flag = 1;
				break;
			}
			ctr++;
		}
		if(flag)
			break;
	}
	cout << ctr << "\n";
	return 0;
}