/* 
	Author   : Abhinav
   
	Modified : 11-08-2018 09:48:44 PM

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
	ll a,b,c;
	cin >> a >> b >> c;
	while(a || b || c){
		if(b-a == c-b)	cout << "AP " << c + (c-b) << "\n";
		else cout << "GP " << c * (c/b) << "\n";
		cin >> a >> b >> c;
	}
	return 0;
}