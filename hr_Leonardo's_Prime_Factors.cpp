/* 
	Author   : Abhinav
   
	Modified : 17-12-2017 02:02:49 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

vi pr;

int prime[16] ={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,i,num;
	vi pr;
	i=1;
	pr.emplace_back(2);
	while(i<16){
		pr.emplace_back(pr[i-1]*prime[i]);
		i++;
	}
	cin >> t;
	while(t-- > 0){
		cin >> num;
		i = 0;
		while(pr[i] <= num && i<pr.size())
			i++;
		if(i == pr.size())
			cout << "17\n";
		else
			cout << i << "\n";
	}
	return 0;
}