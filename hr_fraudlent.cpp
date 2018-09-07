/* 
	Author   : Abhinav
   
	Modified : 16-06-2018 12:26:18 AM

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
	ll n,k,ctr=0;
	int loc;
	float m;
	cin >> n >> k;
	if(k%2==0)
		loc=k/2;
	else
		loc=k/2+1;
	vi v(n);
	vector<int> count(201,0);
	rep(i,0,n)
		cin >> v[i];
	rep(i,0,k)
		count[v[i]]++;
	rep(i,0,n-k){
		int ct=0,j,l;
		for(j=0; ct<loc; j++)
			ct += count[j];
		if(k%2!=0 || ct>loc)
			m=j-1;
		else{
			l=j;
			j=j-1;
			while(count[l]==0)
				l++;
			m=(j+l)/(2.0);
		}
		count[v[i]]--;
		count[v[i+k]]++;
		if(v[i+k]>=2*m)
			ctr++;

	}
	cout << ctr << "\n";
	return 0;
}