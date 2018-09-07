/* 
	Author   : Abhinav
   
	Modified : 26-08-2018 03:49:19 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define mp(x,y) make_pair(x,y)

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll s,n,x,y;
	cin >> s >> n;
	vector<pair<int,int>> v;
	while(n--){
		cin >> x >> y;
		v.emplace_back(mp(x,y));
	}
	sort(v.begin(), v.end());
	for(auto it=v.begin(); it!=v.end(); it++){
		if(s-it->first<=0){
			s = -1;
			break;
		}
		s += it->second;
		//cout << s << "\n";
	}
	if(s<=0)
		cout << "NO\n";
	else
		cout << "YES\n";
	return 0;
}