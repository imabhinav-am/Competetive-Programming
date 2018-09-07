/* 
	Author   : Abhinav
   
	Modified : 11-08-2018 10:16:41 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n,ctr=0,x=0,y=0,z=0,w=0;
	cin >> n;
	string a,b;
	cin >> a >> b;
	rep(i,0,n){
		if(a[i]=='0' && b[i]=='0') x++;
		else if(a[i]=='0' && b[i]=='1') y++;
		else if(a[i]=='1' && b[i]=='0') w++;
		else z++;
	}
	cout << x*w + x*z + y*w << "\n";
	return 0;
}