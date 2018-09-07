/* 
	Author   : Abhinav
   
	Modified : 28-08-2018 09:04:34 PM

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

ll minenergy(vector<vector<int>> v, ll m,ll n){
	if(m<0 || n<0)
		return -1*INF;
	if(m==0&&n==0)
		return v[m][n];
	if(v[m][n]<0)
		return -1*v[m][n] + max(minenergy(v,m-1,n),max(minenergy(v,m-1,n-1),minenergy(v,m,n-1)));
	else if(v[m][n]==0)
		return 1;
	else
		return v[m][n] + min(minenergy(v,m-1,n),min(minenergy(v,m-1,n-1),minenergy(v,m,n-1)));
}

int main(){
	faster;
	ll t,r,c;
	cin >> t;
	while(t--){
		cin >> r >> c;
		vector<vector<int>> v(r,vector<int>(c));
		rep(i,0,r)
			rep(j,0,c)
				cin >> v[i][j];
		cout << 1+minenergy(v,r-1,c-1) << "\n";
	}
	return 0;
}