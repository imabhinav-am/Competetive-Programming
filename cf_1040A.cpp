/* 
	Author   : Abhinav
   
	Modified : 

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
	ll n,a,b,cost,reqa,reqb;
	cin >> n >> a >> b;
	vi v(n),ctr(3,0);
	rep(i,0,n)
		cin >> v[i];
	for(int i=0,j=n-1; i<n/2; i++){
		if(v[i]=v[j])
	}
	return 0;
}