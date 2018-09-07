/* 
	Author   : Abhinav
   
	Modified : 25-08-2018 12:43:35 AM

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
	string s1,s2,s3="";
	cin >> s1 >> s2;
	rep(i,0,s1.size()){
		if(s1[i]!=s2[i]) s3+="1";
		else s3+="0";
	}
	cout << s3 << "\n";
	return 0;
}