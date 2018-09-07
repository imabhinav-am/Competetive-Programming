#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,m,n,ctr;
	cin >> t;
	while(t-- > 0){
		cin >> n >> m;
		int A[n][m];
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
				cin >> A[i][j];
        ctr = 0;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++i){
					int flag = 1;
					int x = i, y =j;
					for(int k=y-1; k>=0; k--)
						if(A[x][k] > A[x][y] || A[x][k] == -1){
							flag = 0;
							break;
						}
					if(flag == 1)
						for(int k=y+1; k<m; k++)
						if(A[x][k] > A[x][y] || A[x][k] == -1){
							flag = 0;
							break;
						}
					if(flag == 1)
						for(int k=x-1; k>=0; k--)
						if(A[k][y] > A[x][y] || A[k][y] == -1){
							flag = 0;
							break;
						}
				    if(flag == 1)
						for(int k=x+1; k<n; k++)
						if(A[k][y] > A[x][y] || A[k][y] == -1){
							flag = 0;
							break;
						}
					if(flag == 1){
						ctr++;
						A[x][y] = -1;
						break;
					}
				}
			}
		cout << ctr << "\n";
	}
	return 0;
}
