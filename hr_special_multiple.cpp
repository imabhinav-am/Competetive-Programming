/* 
	Author   : Abhinav
   
	Modified : 26-12-2017 12:40:44 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

vector <string> s;
vector <ll> v;

void genlist(){
	ll t,j,k;
	for(i,0,s.size()){
		j = (s[i].size())-1;
		k = 1;
		t = 0;
		while(j >= 0){
			t += (s[i].at(j) - '0')*k;
			k *= 10;
			j--;
		}
		v.emplace_back(t);
	}
}

void generateBinary_9(ll n){
    queue<string> q;
    q.push("9");
    while (n--){
        string s1 = q.front();
        q.pop();
        s.emplace_back(s1);
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("9"));
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	generateBinary_9(100000);
	genlist();
	ll t,n;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		for(i,0,v.size())
			if(v[i]%n == 0){
				cout << v[i] << "\n";
				break;
			}
	}
	return 0;
}