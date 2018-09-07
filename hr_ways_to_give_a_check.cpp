/* 
	Author   : Abhinav
   
	Modified : 07-02-2018 07:59:02 PM
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
	int t,P_x,P_y,k_x,k_y,ans;
	cin >> t;
	while(t--){
		vector <string> s(8);
		for(i,0,8){
			cin >> s[i];
			for(j,0,8){
				if(s[i][j] == 'k'){
					k_x = i;
					k_y = j;
				}
			}
		}
		ans = 0;
		for(i,0,8){
			if(s[1][i] == 'P'){
				P_y = i;
				//for Rook
				if(k_x == 0 || k_y == P_y)
					ans++;
				//for Bishop
				if(k_x == abs(P_y-k_y))
					ans++;
				//for Queen
				if((k_x == 0 || k_y == P_y) || k_x == abs(P_y-k_y))
					ans++;
				//for Knight
				if((k_x == 1 && (abs(k_y - P_y) == 2)) || (k_x == 2 && (abs(k_y - P_y) == 1)))
					ans++;
			}
		}
	cout << ans << "\n";
	}
	return 0;
}