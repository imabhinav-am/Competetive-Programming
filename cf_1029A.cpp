/* 
	Author   : Abhinav
   
	Modified : 24-08-2018 08:56:46 PM
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

int main(){
	faster;
	ll n,k,ctr,ctr1;
	cin >> n >> k;
	string s,x;
	cin >> s;
	ctr=0;
	for(int i=1; i<=n/2; i++){
		string s1(s.begin(),s.begin()+i);
		string s2(s.rbegin(),s.rbegin()+i);
		//string s3 = s2;
		reverse(s2.begin(),s2.end());
		if(s1==s2)
			ctr = s1.size();
			//cout << s1 << " " << s2 << "\n";
	}

	string temp;
	for(ll i=ctr;i<s.size();i++)
	{
		temp.push_back(s[i]);
	}
	k--;
	while(k--)
	{
		s+=temp;
	}
	cout<<s;
	return 0;
}