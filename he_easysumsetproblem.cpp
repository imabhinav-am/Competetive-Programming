/* 
	Author   : Abhinav
   
	Modified : 21-07-2018 04:47:48 PM

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
	ll n,m;
	map<ll,ll> mp;
	cin >> n;
	vi a(n);
	rep(i,0,n)
		cin >> a[i];
	cin >> m;
	vi c(m);
	rep(i,0,m){
		cin >> c[i];
		mp[c[i]]++;
	}
	sort(a.begin(), a.end());
	sort(c.begin(), c.end());
	ll dif = c[m-1] - a[n-1];
	set<ll> s;
	int flag;
	rep(i,1,100){
		flag = 0;
		rep(j,0,n){
			if(!mp[i+a[j]]){
				flag = 1;
				break;
			}
		}
		if(!flag)
			s.insert(i);
	}
	for(auto it=s.begin(); it!= s.end(); it++)
		cout << *it << " "; 
	return 0;
}