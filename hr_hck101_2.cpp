#include <bits/stdc++.h>

using namespace std;


int main(){
	int n, m, x,y;
	cin >> n >> m >> x >> y;
	int arr[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
			arr[i][j] = 0;
	}

	for(int i=0; i<x; i++)
		arr[0][i] = 10;

	for(int i=0; i<y; i++)
		arr[n-1][m-1-i] = 10;

	int ctr = 0;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j] == 0 && (j+1 < m || i+1 < n)){
				if(j+1 < m){
					ctr++;
					arr[i][j] = 1;
					arr[i][j+1] = 2;
				}
				else if(i+1 < n){
					ctr++;
					arr[i][j] = 1;
					arr[i+1][j] = 2;
				}
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m ;j++){
			if(arr[i][j] == 0){
				cout << "NO";
				return 0;
			}
		}
	}

	cout <<"YES\n";
	cout << ctr << "\n";

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j] == 1 && (j+1 < m || i+1 < n)){
				if(j+1 < m){
					cout << i+1 << " " << j+1 << " " << i+1  << " " << j+2 << "\n";
				}
				else if(i+1 < n){
					cout << i+1 << " " << j+1 << " " << i+2<< " " << j+1 << "\n";
				}
			}
		}
	}

	return 0;
}