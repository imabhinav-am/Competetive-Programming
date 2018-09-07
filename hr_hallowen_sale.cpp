/* 
	Author   : Abhinav
   
	Modified : 22-02-2018 11:57:25 PM

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
	ll p,d,m,s,ctr=0,sum=0;
	cin >> p >> d >> m >> s;
	if(p+p-d>s && s>p){
		cout << "1";
		return 0;
	}
	if(s<p){
		cout << "0";
		return 0;
	}
	ctr = (p-m)/d+1;
	sum = ctr*p - ((ctr*(ctr-1))/2)*d;
	ctr += (s-sum)/m;
	cout << ctr;
	return 0;
}