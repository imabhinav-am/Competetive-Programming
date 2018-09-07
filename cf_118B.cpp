/* 
	Author   : Abhinav
   
	Modified : 25-08-2018 04:29:21 PM

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
	int n;
	cin >> n;
	for(int i=0; i<n+1; i++){
		for(int j=0; j<n-i; j++)
			cout << "  ";
		cout << "0";
		for(int x=1; x<=i; x++)
			cout << " " << x;
		for(int y=i-1; y>=0; y--)
			cout << " " << y;
		cout << "\n";
	}
	for(int i=n-1; i>=0; i--){
		for(int j=0; j<n-i; j++)
			cout << "  ";
		cout << "0";
		for(int x=1; x<=i; x++)
			cout << " " << x;
		for(int y=i-1; y>=0; y--)
			cout << " " << y;
		cout << "\n";
	}
	return 0;
}