/* 
	Author   : Abhinav
   
	Modified : 

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
	ll t;
	string s,ch;
	for(i,0,100000)
		ch += to_string(i);
	cin >> t;
	int flag;
	while(t-- > 0){
		cin >> s;
		flag = 0;
		for(i,0,100){
			if(s[0] == ch[i]){
				if(s == ch.substr(i,s.size())){
					flag = 1;
					break;
				}
			}
		}
		if(flag == 1){
			
			cout << "YES " << s[0] << "\n";
		}
		else{
			cout << "NO\n";
		}
	}
	return 0;
}