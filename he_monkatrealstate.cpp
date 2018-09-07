/* 
	Author   : Abhinav
   
	Modified : 23-01-2018 05:09:07 PM

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
	ll t,n,a,b;
	cin >> t;
	while(t--){
		set <ll> s;
		cin >> n;
		while(n--){
			cin >> a >> b;
			s.emplace(a);
			s.emplace(b);
		}
		cout << s.size() << "\n";
	}
	return 0;
}