/* 
	Author   : Abhinav
   
	Modified : 25-08-2018 05:39:03 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define make_pair mp

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n;
	cin >> n;
	set<ll> s;
	while(n%2==0){
		s.insert(2);
		n=n/2;
	}
	for(int i=3; i<=sqrt(n); i+=2){
		while(n%i==0){
			s.insert(i);
			n=n/i;
		}
	}
	if(n>2)
		s.insert(n);
	ll ans=1;
	for(auto it=s.begin(); it!=s.end(); it++){
		//cout << *it << "\n";
		ans *= *it;
	}
	cout << ans;
	return 0;
}