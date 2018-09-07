#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		ll ctr=0;
		for(int i=0; i<s.size(); i++)
			if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='o'||s[i]=='O'
				||s[i]=='u'||s[i]=='U'||s[i]=='i'||s[i]=='I')
				ctr++;
		cout << ctr << "\n";
	}
}