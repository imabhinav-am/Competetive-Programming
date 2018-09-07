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
	ll n,s,ans=0,p;
	cin >> n >> s;
	vi v(n);
	rep(i,0,n)
		cin >> v[i];
	sort(v.begin(), v.end());
	ll med = v[n/2];
	if(med==s){
		cout << "0";
		return 0;
	}
	else if(s<med){
		p=n/2;
		while(v[p]>s){
			ans += v[p]-s;
			p--;
			if(p<0)
				break;
		}
	}
	else{
		p = n/2;
		while(v[p]<s){
			ans += s-v[p];
			p++;
			if(p==v.size())
				break;
		}
	}
	cout << ans << "\n";
	return 0;
}