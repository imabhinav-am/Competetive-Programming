/* 
	Author   : Abhinav
   
	Modified : 06-06-2018 04:00:18 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<long double> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	long double f,N;
	ll t,temp,a,b;
	cin >> t;
	while(t--){
		vi v(10001,0);
		cin >> f >> a >> b;
		N=f;
		while(N--){
			cin >> temp;
			v[temp]++;
		}
		cout << setprecision(11) << showpoint << v[a]/f * v[b]/f << "\n";
	}
	return 0;
}