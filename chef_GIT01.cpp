/* 
	Author   : Abhinav
   
	Modified : 01-12-2017 10:52:02 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define For(i,n) for(ll i=0; i<n; i++)

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,m;
	cin >> t;
	while(t-- > 0){
		cin >> n >> m;
		char** minR = new char*[n];
		char** minG = new char*[n];
		For(i,n){
			minR[i] = new char [m];
			minG[i] = new char [m];
		}
		For(i,n){
			if(i % 2 == 0){
				for (int j = 0; j < m; j+=2){
					minR[i][j] = 'R';
					minG[i][j] = 'G';
					if(j < m-1){
						minR[i][j+1] = 'G';
						minG[i][j+1] = 'R';
					}
				}
			}
			else{
				for (int j = 0; j < m; j+=2){
					minR[i][j] = 'G';
					minG[i][j] = 'R';
					if(j < m-1){
						minR[i][j+1] = 'R';
						minG[i][j+1] = 'G';
					}
				}	
			}
		}
		int costR=0,costG=0;
		string cake[n];
		For(i,n){
			cin >> cake[i];
			For(j,m){
				if(cake[i][j] != minR[i][j]){
					if(cake[i][j] == 'R')
						costR+=5;
					else
						costR+=3;
				}
				else if(cake[i][j] != minG[i][j]){
					if(cake[i][j] == 'R')
						costG+=5;
					else
						costG+=3;
				}
			}
		}
		cout << min(costR,costG) << "\n";
	}
	return 0;
}