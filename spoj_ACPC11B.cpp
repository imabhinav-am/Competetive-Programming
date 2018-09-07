/* 
	Author   : Abhinav
   
	Modified : 01-09-2018 04:51:42 PM

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
	ll t,n,m;
	cin >> t;
	while(t--){
		cin >> n;
		vi v1(n);
		rep(i,0,n) cin >> v1[i];
		cin >> m;
		vi v2(m);
		rep(i,0,m) cin >> v2[i];
		ll mn = INT_MAX;
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		for(int i=0,j=0; i<n && j<m;){
			if(mn>abs(v1[i]-v2[j]))	mn = abs(v1[i]-v2[j]);
			v1[i]<v2[j]?i++:j++;
		}
		cout << mn << "\n";
	}
	return 0;
}