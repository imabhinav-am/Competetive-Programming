/* 
	Author   : Abhinav
   
	Modified : 03-02-2018 12:57:01 AM
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
	ll t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ll ctr=0;
		if(s.size()>=4){
			for(i,0,s.size()-3){
				string temp = s.substr(i,4);
				sort(temp.begin(), temp.end());
				if(temp == "cefh")
					ctr++;
			}
		}
		if(ctr)
			cout << "lovely " <<ctr << "\n";
		else 
			cout << "normal\n";
	}
	return 0;
}