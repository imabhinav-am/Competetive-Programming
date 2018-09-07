/* 
	Author   : Abhinav
   
	Modified : 19-08-2018 07:24:38 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define push_back pb
#define emplace_back ep
#define make_pair mp

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n;
	string s;
	cin >> n >> s;
	if(n==1){
		cout << "Yes\n";
		return 0;
	}
	vi freq(27,0);
	rep(i,0,n)
		freq[s[i]-'a']++;
	ll ctr2=0;
	rep(i,0,27){
		//cout << freq[i] << " ";
		if(freq[i]>=2)
			ctr2++;
	}
	//cout << ctr2 << " " << ctr1 << "\n";
	if(ctr2>0)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}