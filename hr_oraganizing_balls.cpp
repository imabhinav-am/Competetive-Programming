/* 
	Author   : Abhinav
   
	Modified : 15-02-2018 10:46:25 PM

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
	ll q,n,x,flag;
	cin >> q;
	while(q--){
		cin >> n;
		ll row[n]={0},col[n]={0};
		for(i,0,n){
			for(j,0,n){
				cin >> x;
				row[i] += x;
				col[j] += x;
			}
		}
		for(i,0,n){
			flag = 1;
			for(j,i,n){
				if(row[i] == col[j]){
					swap(col[i],col[j]);
					flag = 0;
				}
			}
			if(flag == 1){
				cout << "Impossible\n";
				break;
			}
		}
		if(flag == 0)
			cout << "Possible\n";
	}
	return 0;
}