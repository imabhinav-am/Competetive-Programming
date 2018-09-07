/* 
	Author   : Abhinav
   
	Modified : 19-07-2018 11:00:33 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

vi p(101,1);

void prime(){
	int x=2;
	p[1]=0;
	while(x*x<=100){
		for(int i=2*x; i<101; i+=x)
			p[i]=0;
		x++;
	}
}

int main(){
	faster;
	prime();
	ll t,n,x;
	cin >> t;
	while(t--){
		cin >> n;
		int flag1=0, min=INT_MAX;
		rep(i,0,n){
			cin >> x;
			if(x==1){
				flag1=1;
			}
			if(p[x] && x<min)
				min = x;
		}
		if(flag1 && min!=INT_MAX)
			cout << min << "\n";
		else
			cout << "-1\n";
	}
	return 0;
}