/* 
	Author   : Abhinav
   
	Modified : 20-12-2017 08:33:48 PM

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
	ll r,c,n;
	cin >> r >> c >> n;
	string s;
	vector <string> t0(r),t2(r),t3(r),t4(r);
	for(i,0,r){
		cin >> s;
		t0[i] = s;
		t2[i] = s;
		t3[i] = s;
		t4[i] = s;
	}
	if(n == 1 || n % 4 == 1){
		for(i,0,r){
			for(j,0,c)
				cout << t0[i][j];
		cout << "\n";
		}
	}
	else{
		if(n == 2 || n % 4 == 2 || n == 4 || n % 4 == 0){
			for(i,0,r){
				for(j,0,c)
					cout << "O";
			cout << "\n";
			}
		}
		else{
			for(i,0,r){
				for(j,0,c){
					if(t0[i][j] == '.'){
						t2[i][j] = '3';
					}
					else{
						t2[i][j] = '1';
					}
				}
			}
			for(i,0,r){
				for(j,0,c){
					if(t2[i][j] == '1'){
						t3[i][j] = '0';
						if(i > 0)
							t3[i-1][j] = '0';
						if(i < r-1)
							t3[i+1][j] = '0';
						if(j > 0)
							t3[i][j-1] = '0';
						if(j < c-1)
							t3[i][j+1] = '0';
					}
					else if(t2[i][j] == '3' && t3[i][j] != '0'){
						t3[i][j] = '2';
					}
				}
			}
			if(n == 3 || n % 4 == 3){
				for(i,0,r){
					for(j,0,c){
						if(t3[i][j] == '0')
							cout << ".";
						else
							cout << "O";
					}
				cout << "\n";
				}
			}
		}
	}
	return 0;
}