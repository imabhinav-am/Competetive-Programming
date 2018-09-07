/* 
	Author   : Abhinav
   
	Modified : 02-09-2018 08:53:41 PM

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
	ll n,ct=0;
	cin >> n;
	string a,b;
	cin >> a >> b;
	rep(i,0,n-1){
		if(a[i]!=b[i]){
			if(a[i]==a[i+1] && b[i]==b[i+1]){
				a[i]=b[i];
				ct+=1;
			}
			else if(a[i]==a[i+1] && b[i]!=b[i+1]){
				ct+=1;
				a[i]=b[i];
			}
			else if(a[i]!=a[i+1]&&b[i]!=b[i+1]){
				ct += 1;
				swap(a[i],a[i+1]);
			}
			else if(a[i]!=a[i+1]&&b[i]==b[i+1]){
				ct += 1;
				a[i] = b[i];
			}
		}
	}
	if(a[n-1]!=b[n-1])
		ct+=1;
	cout << ct ;
	return 0;
}