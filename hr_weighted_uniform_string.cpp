/* 
	Author   : Abhinav
   
	Modified : 29-12-2017 02:47:58 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	vi freq(s.size(),0);
	freq[0] = s[0]-'a'+1;
	for(i,1,s.size()){
		if(s[i] == s[i-1])
			freq[i] = freq[i-1] + s[i] - 'a' + 1;
		else
			freq[i] = s[i] - 'a' + 1;
	}
	sort(freq.begin(),freq.end());
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(binary_search(freq.begin(), freq.end(),n))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}