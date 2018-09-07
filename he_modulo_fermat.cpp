/* 
	Author   : Abhinav
   
	Modified : 26-07-2018 10:21:45 PM

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
	ll p,l,ctr=0,x=1,sum=0,flag;
	cin >> p >> l;
	for(int i=1; i<p; i++){
		flag = 0;
		for(int j=i; j<p; j++){
			for(int k=1; k<p; k++){
				sum = pow(i,x) + pow(j,x);
				if(sum%p == ll(pow(k,x))%p){
					ctr++;
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				break;
		}
		x++;
		if(x>l)
			break;
	}
	cout << ctr;
	return 0;
}