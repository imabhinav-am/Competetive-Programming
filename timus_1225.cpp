/* 
	Author   : Abhinav
   
	Modified : 29-08-2018 08:43:23 PM 

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
	vi v(n+1);
	v[0] = 0;
	v[1] = 2;
	rep(i,2,n+1)
		v[i] = v[i-1] + v[i-2];
	cout << v[n];
	return 0;
}