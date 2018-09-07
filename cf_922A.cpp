/* 
	Author   : Abhinav
   
	Modified : 14-02-2018 11:31:31 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)
#define forv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll a,b;
	cin >> a >> b;
	if(b==1 && a>0){
		cout << "No";
		exit(0);
	}
	if((a-b-1)>=-2 && (a-b-1)%2 == 0 && b>=1 && a>=0)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}