/* 
	Author   : Abhinav
   
	Modified : 18-01-2018 11:11:13 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

void func(ll t){
	if(t!=0){
		func((t-1)/26);
		cout << char(65+(t-1)%26);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	ll t,j,col,row,temp;
	regex r("R([0-9]+)C([0-9]+)$");
	cin>>t;
	while(t--){
		cin >> s;
		if(regex_match(s,r)){
			j = s.size()-1;
			col = 0;
			temp = 1;
			while(s[j]!='C'){
				col += (s[j]-'0')*temp;
				temp *= 10;
				j--;
			}
			j--;
			row = 0;
			temp = 1;
			while(s[j]!='R'){
				row += (s[j]-'0')*temp;
				temp *= 10;
				j--;
			}
			func(col);
			cout << row << "\n";	
		}
		else{
			j = s.size()-1;
			row = 0;
			temp = 1;
			while(s[j]<65){
				row += (s[j]-'0')*temp;
				temp *= 10;
				j--;
			}
			j = 0;
			col = 0;
			while(int(char(s[j]))>64){
				col = col*26 + int(char(s[j]))-64;
				j++;
			}
			cout << "R"<< row << "C" << col << "\n";
		}
	}
	return 0;
}