/* 
	Author   : Abhinav
   
	Modified : 01-09-2018 12:30:12 AM

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
	ll n,k;
	cin >> n >> k;
	rep(i,0,n){
		rep(j,0,n)
			i==j?cout<<k<<" ":cout<<"0 ";
		cout << "\n";
	}
	return 0;
}