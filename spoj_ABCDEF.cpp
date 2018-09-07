/* 
	Author   : Abhinav
   
	Modified : 06-09-2018 02:28:30 AM

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
	ll t,n;
	vi v;
	cin >> t;
	while(t--){
		cin >> n;
		v.emplace_back(n);
	}
	n = v.size();
	vi v1,v2;
	rep(i,0,n){
		rep(j,0,n){
			rep(k,0,n){
				v1.emplace_back(v[i]*v[j]+v[k]);
				if(v[i]!=0)
					v2.emplace_back(v[i]*(v[j]+v[k]));
			}
		}
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	n = v1.size();
	ll ctr=0;
	rep(i,0,n){
		if(binary_search(v2.begin(), v2.end(), v1[i])){
			ctr += 	(upper_bound(v2.begin(), v2.end(), v1[i]) - v2.begin())-
					(lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin());
		}
	}
	cout << ctr;
	return 0;
}