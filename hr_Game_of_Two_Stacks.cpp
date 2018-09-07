/* 
	Author   : Abhinav
   
	Modified : 12-12-2017 11:43:05 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin >> t;
	while(t-- > 0){
		ll n1,n2,x;
		cin >> n1 >> n2 >> x;
		vector <ll> s1(n1),s2(n2);
		for (ll i = 0; i < n1; ++i)
			cin >> s1[i];
		for (ll i = 0; i < n2; ++i)
			cin >> s2[i];
		ll sum = 0,top1 = 0,top2 = 0,ctr = 0;
		while(top1 < n1){
			sum += s1[top1];
			top1++;
			if(sum > x){
				top1--;
				sum -= s1[top1];
				break;
			}
		}
		ctr = top1;
		while(top2 < n2){
			sum += s2[top2];
			top2++;
			while(sum > x && top1 > 0){
				top1--;
				sum -= s1[top1];
			}
			if(sum <= x)
				ctr = max(ctr,top1+top2);
		}
		cout << ctr << "\n";
	}
	return 0;
}