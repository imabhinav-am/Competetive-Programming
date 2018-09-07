/* 
	Author   : Abhinav
   
	Modified : 23-01-2018 03:07:48 PM

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
	sort(s1.begin(), s1.end());
	for(i,0,s1.size()){
		for(j,i+1,s1.size()){
			string temp = s1;
			swap(temp[i],temp[j]);
			sort(temp.begin()+i+1, temp.end());
			if(stoll(temp)>stoll(s1) && stoll(temp)<=stoll(s2))
				swap(s1[i],s1[j]);
		}
	}
	cout << s1 << "\n";
	return 0;
}