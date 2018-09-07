/* 
	Author   : Abhinav
   
	Modified : 27-08-2018 11:21:41 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;
typedef pair<int,int> PII;

#define faster  ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define PB push_back 
#define MP make_pair
# define INF 0x3f3f3f3f

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n;
	cin >> n;
	map<string,ll> m;
	string s;
	rep(i,0,n){
		cin >> s;
		m[s]++;
	} 
	ll max=INT_MIN;
	string win;
	for(auto it=m.begin(); it!=m.end(); it++)
		if(it->second>max){
			win = it->first;
			max = it->second;
		}
	cout << win << "\n";
	return 0;
}