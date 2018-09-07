/* 
	Author   : Abhinav
   
	Modified : 06-09-2018 01:45:58 AM

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
#define repv(i,j,k) for(ll i=j; i>k; i

bool chkcow(vi v,ll x,ll ct){
	ll pos = 0,ctr=1;
	rep(i,1,v.size()){
		if(v[i]-v[pos]>=x){
			pos = i;
			ctr++;
		}
		if(ctr==ct) break;
	}
	//cout << x << " " << ctr << "\n";
	bool res;
	ctr==ct?res=true:res=false;
	return res;
}

int main(){
	faster;
	ll t,n,ans,c;
	cin >> t;
	while(t--){
		cin >> n >> c;
		vi v(n);
		rep(i,0,n)
			cin >> v[i];
		sort(v.begin(), v.end());
		ll low = 0, high=v[n-1]-v[0];
		while(low<=high){
			ll mid = low + (high-low)/2;
			//cout << low << " " << mid << " " << high << "\n";
			if(chkcow(v,mid,c)){
				ans = mid;
				low = mid+1;
			}
			else
				high = mid-1;
		}
		cout << ans << "\n";
	}
	return 0;
}