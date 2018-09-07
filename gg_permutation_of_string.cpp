/* 
	Author   : Abhinav
   
	Modified : 25-08-2018 01:19:21 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define make_pair mp

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

void permute(string &s, int l, int r,map<string,int> &m){
	if(l==r)
		m[s]++;
	for(int i=l; i<=r; i++){
		swap(s[l],s[i]);
		permute(s,l+1,r,m);
		swap(s[l],s[i]);
	}
}

int main(){
	faster;
	ll t;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		map<string,int> m;
		permute(s,0,s.size()-1,m);
		for(auto it=m.begin(); it!=m.end(); it++)
			cout << it->first << " ";
		cout << "\n";
	}
	return 0;
}