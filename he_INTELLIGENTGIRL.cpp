/* 
	Author   : Abhinav
   
	Modified : 22-08-2018 06:28:00 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define make_pair mp

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

bool iseven(char s){
	if((s-'0')%2==0) return true;
	return false;
}

int main(){
	faster;
	string s;
	cin >> s;
	ll b = 0;
	if(iseven(s[s.size()-1]))
		b = 1;
	stack<ll> st;
	st.push(b);
	for(int i=s.size()-2; i>=0; i--){
		if(iseven(s[i]))
			b += 1;
		st.push(b);
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << "\n";
	return 0;
}