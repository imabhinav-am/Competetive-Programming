/* 
	Author   : Abhinav
   
	Modified : Sunday 17 February 2019 09:44:25 PM IST

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
	cin >> t;
	while(t--){
		cin >> n;
		vi v(n);
		rep(i,0,n)
			cin >> v[i];
		sort(v.begin(), v.end());
		ll ctr=0;
		rep(i,0,n){
			if(v[i]==0)
				ctr++;
			else if(ctr>=v[i])
				ctr++;
			else
				break;
		}
		cout << ctr << "\n";
	}
	return 0;
}