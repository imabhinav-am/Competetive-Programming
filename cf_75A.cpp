/* 
	Author   : Abhinav
   
	Modified : 27-08-2018 11:15:27 PM

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
	ll m,n,s;
	cin >> m >> n;
	s = m+n;
	int flag=1;
	while(s>0&&m>0&&n>0){
		if(s%10==0||m%10==0||n%10==0)
			if(!(s%10==0&&m%10==0&&n%10==0)){flag = 0;break;}
		s /= 10;
		m /= 10;
		n /= 10;
	}
	if(flag)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}