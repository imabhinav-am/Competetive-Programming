/* 
	Author   : Abhinav
   
	Modified : 21-12-2017 02:00:17 PM

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
	string s1,s2;
	cin >> s1 >> s2;
	vector <vi> ch(s1.size()+1,vi (s2.size()+1));
	for(i,1,s1.size()+1){
		for (j,1,s2.size()+1){
			if(s1[i-1] == s2[j-1])
				ch[i][j] = ch[i-1][j-1] + 1;
			else
				ch[i][j] = max(ch[i-1][j],ch[i][j-1]);
		}
	}
	cout << ch[s1.size()][s2.size()];
	return 0;
}