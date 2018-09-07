/* 
	Author   : Abhinav
   
	Modified : 05-02-2018 04:22:30 PM

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
		string s, temp = "hydro";
		cin >> s;
		if(s[s.size()-1] == 'c' && s[s.size()-2] == 'i'){
			string x = s.substr(0,5);
			if(x == temp)
				cout << "non-metal acid\n";
			else
				cout << "polyatomic acid\n";
		}
		else{
			cout << "not an acid\n";
		}
	}
	return 0;
}