/* 
	Author   : Abhinav
   
	Modified : 03-02-2018 01:32:56 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)
#define forv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll t,n,m,x,k;
	cin >> t;
	while(t--){
		string s;
		cin >> n >> m >> x >> k;
		cin >> s;
		sort(s.begin(), s.end());
		ll i=0;
		while(s[i]=='E' && i<s.size())
			i++;
		ll cnt_e = i;
		ll cnt_o = s.size()-i;
		i=1;
		ll sum=0;
		while(i<=m){
			if(i%2 != 0){
				sum += min(cnt_o, x);
				cnt_o -= min(cnt_o, x);
			}
			else{
				sum += min(cnt_e, x);
				cnt_e -= min(cnt_e, x);
			}
			i++;
		}
		if(sum >= n)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}