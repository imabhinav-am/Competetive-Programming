/* 
	Author   : Abhinav
   
	Modified : 20-12-2017 12:15:18 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,k,x,y,ctr;
	vi arr(100001);
	for(i,1,100002)
		arr[i] = i;
	cin >> t;
	while(t-- > 0){
		cin >> n >> k;
		if(k == 0){
			for(i,1,n+1)
				cout << i << " ";
		}
		else if(n%(2*k) == 0){
			x = k+1;
			y = 1;
			ctr = 0;
			while(1){
				for(i,0,k){
					ctr++;
					cout << arr[x] << " ";
					if(ctr >= n){
						break;
					}
					x++;
				}
				if(ctr >= n){
						break;
				}
				x += k;
				for(i,0,k){
					ctr++;
					cout << arr[y] << " ";
					if(ctr >= n){
						break;
					}
					y++;
				}
				y += k;
				if(ctr >= n){
						break;
				}
			}
		}
		else{
			cout << "-1";
		}
		cout << "\n";
	}
	return 0;
}