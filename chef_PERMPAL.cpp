/* 
	Author   : Abhinav
   
	Modified : 04-02-2018 04:07:48 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)
#define forv(i,j,k) for(ll i=j; i>k; i--)

bool myfunc(vi v1, vi v2){
	return v1.size()>v2.size();
}

void foo(string s){
	vector <vi> v(26); 
	for(i,0,s.size()){
		v[s[i]-'a'].emplace_back(i+1);
	}
	int odd=0, flag=0;
	for(i,0,26){
		if(v[i].size() & 1)
			odd++;
		if(odd > 1)
			flag = 1;
	}
	if(flag == 1){
		cout << "-1\n";
		return;
	}
	vi ans(s.size());
	int front = 0, last = s.size()-1;
	sort(v.begin(), v.end(), myfunc);
	for(i,0,26){
		int j=0;
		if(v[i].size()%2 != 0){
			ans[s.size()/2] = v[i].at(j);
			j++;
		}
		while(j < v[i].size()){
			ans[front] = v[i].at(j);
			front++;
			j++;
			if(j == v[i].size())
				break;
			ans[last] = v[i].at(j);
			last--;
			j++;
		}
	}
	for(i,0,s.size())
		cout << ans[i] << " ";
	cout << "\n";
}

int main(){
	faster;
	ll t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		foo(s);
	}
	return 0;
}