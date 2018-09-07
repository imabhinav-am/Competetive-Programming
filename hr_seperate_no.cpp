/* 
	Author   : Abhinav
   
	Modified : 23-02-2018 06:57:42 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;


int main(){
	faster;
	ll q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		int flag = 0;
		string str="";
		for(int i=0; i<s.size()/2; i++){
			str += s[i];
			string temp;
			//cout << str << "\n";
			for(ll x=stoll(str); (temp+to_string(x)).size()<=s.size(); x++){
				temp += to_string(x);
			}
			//cout << temp << "\n";
			if(temp == s){
				cout << "YES " << str << "\n";
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			cout << "NO\n";
	}
	return 0;
}