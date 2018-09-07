/* 
	Author   : Abhinav
   
	Modified : 27-08-2018 11:37:16 PM

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
		ll curr_max=v[0], max_so_far=v[0];
		for(int i=1; i<n; i++){
			curr_max = max(v[i], curr_max+v[i]);
			max_so_far = max(curr_max, max_so_far);
		}
		cout << max_so_far << "\n";
	}
	return 0;
}