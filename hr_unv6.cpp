/* 
	Author   : Abhinav
   
	Modified : 

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
	vector<vi> arr(3000,vi(3000,0));
	ll t,x1,x2,y1,y2,mx=0,my=0;
	cin >> t;
	while(t--){
		cin >> x1 >> y1 >> x2 >> y2;
		mx = max(x1,max(mx,x2));
		my = max(y1,max(my,y2));
		for(int i=x1; i<=x2; i++){
			for(int j=y1; j<=y2; j++)
				arr[i][j] = 1;
		}
	}
	return 0;
}