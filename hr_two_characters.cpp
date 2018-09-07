/* 
	Author   : Abhinav
   
	Modified : 23-02-2018 05:59:42 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

ll count_ch(string s, char i, char j){
	char ch=' ';
	ll n=0;
	for(int x=0; x<s.size(); x++){
		if(s[x] == i){
			if(ch == i) return 0;
			n++;
			ch = s[x];
		}
		if(s[x] == j){
			if(ch == j) return 0;
			n++;
			ch = s[x];	
		}
	}
	return n;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,temp,ans=0;
	string s;
	cin >> n >> s;
	if(n!=1)
	for(char i='a'; i<='z'; i++){
		for(char j='a'; j<='z'; j++){
			if(j == i) continue;
			temp = count_ch(s,i,j);
			if(temp>ans){
				ans = temp;
				//cout << i << " " << j << "\n";
			}
		}
	}
	cout << ans;
	return 0;
}