/* 
	Author   : Abhinav
   
	Modified : 01-01-2018 08:37:30 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		string s[n];
		for(ll i=0;i<n;i++)
			s[i] = '5';
		ll cnt5 = n;
		if(cnt5%3 == 0){
			for(ll i=0;i<n;i++)
				cout << s[i];
		}
		else{
			ll cnt3 = 0;
			int flag = 0;
			for(ll j=n-1; j>=0; j--){
				cnt3++;
				cnt5--;
				s[j] = '3';
				if(cnt3%5==0 && cnt5%3==0){
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				for(ll i=0;i<n;i++)
					cout << s[i];
			else{
				cout << "-1";
			}
		}
		cout << "\n";
	}
	return 0;
}