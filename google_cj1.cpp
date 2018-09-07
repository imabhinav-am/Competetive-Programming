/* 
	Author   : Abhinav
   
	Modified : 07-04-2018 03:21:04 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll chkd(string s){
	ll d = 1;
	ll td = 0;
	rep(i,0,s.size()){
		if(s[i]=='C')
			d*=2;
		else if(s[i]=='S')
			td+=d;
	}
	return td;
}

int main(){
	faster;
	ll t,T=1,s,d,td;
	string p;
	cin >> t;
	while(T<=t){
		cin >> s >> p;
		d = 1;
		td = chkd(p);
		if(td<=s)
			cout << "Case #" << T << ": 0" << "\n";
		else{
			int ctr=0,flag=0;
			rep(i,0,p.size()-1){
				if(p[i]=='C' && p[i+1]=='S'){
					swap(p[i],p[i+1]);
					i=0;
					ctr++;
				}
				td = chkd(p);
				if(td<=s){
					flag = 1;
					break;
				}
			}
			if(flag==1)
				cout << "Case #" << T << ": " << ctr << "\n";
			else
				cout << "Case #" << T << ": " << "IMPOSSIBLE\n";
		}
		T++;
	}
	return 0;
}