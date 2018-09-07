/* 
	Author   : Abhinav
   
	Modified : 23-03-2018 01:32:52 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

bool is_attacked(ll i, ll j, vector<vi> v){
	ll n = v.size();
	//cout << n << "\n";
	rep(x,0,n){
		rep(y,0,n){
			if(x == i || y == j || x+y==i+j || x-y==i-j)
				if(v[x][y] == 1) return true;
		}
	}
	return false;
}

bool solve_queens(vector<vi> &v,ll n){
	if(n==0) return true;

	rep(i,0,v.size()){
		rep(j,0,v.size()){
			if(is_attacked(i,j,v))
				continue;
			v[i][j] = 1;
			if(solve_queens(v, n-1))
				return true;
			v[i][j] = 0;
		}
	}
	return false;
}

int main(){
	faster;
	ll n;
	cin >> n;
	vector<vi> v(n, vi(n,0));
	if(solve_queens(v,n)){
		cout << "YES\n";
		rep(x,0,n){
			rep(y,0,n)
				cout << v[x][y] << " ";
			cout << "\n"; 
		}
	}
	else
		cout << "NO\n";
	return 0;
}