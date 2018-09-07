/* 
	Author   : Abhinav
   
	Modified : 23-06-2018 02:28:23 PM

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
	ll n,k,ctr=0,x;
	string str;
	cin >> n;
	vi v(n+1,0);
	cin >> k;
	while(k--){
		cin >> str;
		if(str == "CLICK"){
			cin >> x;
			if(v[x]==0){
				v[x]=1;
				ctr++;
			}
			else{
				v[x]=0;
				ctr--;
			}
		}
		else{
			rep(i,0,n+1)
				v[i] = 0;
				ctr=0;
		}
		cout << ctr << "\n";
	}
	return 0;
}