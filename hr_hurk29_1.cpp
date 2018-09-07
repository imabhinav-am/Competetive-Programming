/* 
	Author   : Abhinav
   
	Modified : 02-08-2018 08:50:53 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int chktop(vector<vector<int>> a, int i, int j){
	if(a[i-1][j] == a[i][j])
		return 1;
	return 0;
}

int chkbottom(vector<vector<int>> a, int i, int j){
	if(a[i+1][j] == a[i][j])
		return 1;
	return 0;
}

int chkleft(vector<vector<int>> a, int i, int j){
	if(a[i][j-1] == a[i][j])
		return 1;
	else
		return 0;
}

int chkright(vector<vector<int>> a, int i, int j){
	if(a[i][j+1] == a[i][j])
		return 1;
	else
		return 0;
}
int main(){
	faster;
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<vector<int>> a(n+2, vector<int>(n+2,-2));
		rep(i,1,n+1)
			rep(j,1,n+1){
				cin >> a[i][j];
			}
		int flag = 0;
		rep(i,1,n+1){
			rep(j,1,n+1){
				if(chkbottom(a,i,j) || chkright(a,i,j) || chkleft(a,i,j) || chktop(a,i,j)){
					flag = 1;
					break;
				} 
			}
			if(flag==1)
				break;
		}
		if(flag==1)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	return 0;
}