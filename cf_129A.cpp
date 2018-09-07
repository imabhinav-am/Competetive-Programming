/* 
	Author   : Abhinav
   
	Modified : 30-08-2018 08:13:32 PM

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
	vi v(n);
	ll sum = 0;
	rep(i,0,n){
		cin >> v[i];
		sum += v[i];
	}
	ll ctr=0;
	rep(i,0,n)
		if((sum-v[i])%2==0) ctr++;
	cout << ctr << "\n";
	return 0;
}