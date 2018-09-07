/* 
	Author   : Abhinav
   
	Modified : 13-12-2017 07:56:17 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	int n;
	while(t-- > 0){
		string s;
		cin >> s;
		string temp(s);
		n = next_permutation(temp.begin(), temp.end());
		if(n != 0)
			cout << temp << "\n";
		else
			cout << "no answer\n";
	}
	return 0;
}