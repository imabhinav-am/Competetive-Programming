/* 
	Author   : Abhinav
   
	Modified : 11-12-2017 03:15:05 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,t,a,x,y,seq,lastans=0;
	cin >> n >> t;
	vector < vector < int > > list(n);
	while(t-- > 0){
		cin >> a >> x >> y;
		seq = (x^lastans)%n;
		if(a == 1)
			list[seq].emplace_back(y);
		else{
			lastans = list[seq][y%list[seq].size()];
			cout << lastans << "\n";
		}
	}
	return 0;
}