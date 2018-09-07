/* 
	Author   : Abhinav
   
	Modified : 19-12-2017 10:57:25 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,i;
	string s;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		cin >> s;
		i = 0;
		int arr[27] = {0};
		int chk = 0;
		while(i < s.size()){
			if(s[i] == '_')
				arr[0]++;
			else{
				if(i==0){
					if(s[i] != s[i+1] && s[i+1] != '_')
					chk = 1;
				}
				else if(i == n-1){	
					if(s[i] != s[i-1] && s[i-1] != '_')
					chk = 1;
				}
				else if(s[i] != s[i-1] && s[i] != s[i+1] && s[i+1] != '_' && s[i-1] != '_')
					chk = 1;				
				arr[int(s[i])-64]++;
			}
			i++;
		}
		int flag = 0;
		for(i,1,27){
			if(arr[i] == 1 || (chk == 1 && arr[0] == 0)){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
		}
	}
	return 0;
}