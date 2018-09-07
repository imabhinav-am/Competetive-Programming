/* 
	Author   : Abhinav
   
	Modified : 07-06-2018 03:55:52 PM
*/ 
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef vector<ll> vi;
 
#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
 
const ll mod = 1e9+7;
 
#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)
 
ll lcp(string s1, string s2){
	ll ctr=0;
	for(int i=0; i<min(s1.size(),s2.size()); i++){
		if(s1[i] != s2[i])
			break;
		ctr++;
	}
	return ctr;
}
 
int main(){
	faster;
	ll n,t,ctr,ans_ctr,r;
	string s;
	map<string,int> m;
  	map<string,int>::iterator it_a, it_b, it;
	cin >> n;
  	for ( int i = 0; i < n; i++ ) {
      cin >> s;
      m.insert( pair<string,int>( s, i + 1 ) );
   	}
	cin >> t;
	while(t--){
		cin >> r >> s;
		auto found = m.find(s);
		if(found!=m.end() && found->second <= r){
			cout << s << "\n";
			continue;
		}
		auto ins = found;
		ins = m.insert(pair<string,int>(s,-1)).first;
		int lcp_a = -1, lcp_b = -1;
		it_a = ins;
		for(it_a++; it_a != m.end(); it_a++){
			if(it_a->second <= r){
				lcp_a = lcp(it_a->first, s);
				break;
			}
		}
		it_b = ins;
		while(it_b != m.begin()){
			it_b--;
			if(it_b->second <= r){
				lcp_b = lcp(it_b->first, s);
				break;
			}
		}
		if(lcp_a > lcp_b){
			cout << it_a->first << "\n";
		}
		else{
			it = it_b;
			while(it != m.begin()){
				it--;
				if(it->second <= r){
					if(lcp(it->first,s) == lcp_b)
					it_b = it;
					else break;
				}
			}
			cout << it_b->first << "\n"; 		
		}
		if(found == m.end()) m.erase(s);
	} 
	return 0;
}