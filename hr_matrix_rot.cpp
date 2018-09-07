/* 
	Author   : Abhinav
   
	Modified : 23-02-2018 04:27:55 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

void matrixRotation(vector < vector<ll> > &mat,ll row, ll col,ll m, ll n) {
	ll R=m, C=n;
    ll prev, curr;
 
    prev = mat[row][col+1];

    for (int i = row; i < m; i++)
    {
        curr = mat[i][col];
        mat[i][col] = prev;
        prev = curr;
    }
    col++;

    for (int i = col; i < n; i++)
    {
        curr = mat[m-1][i];
        mat[m-1][i] = prev;
        prev = curr;
    }
    m--;

    if (col < n)
    {
        for (int i = m-1; i >= row; i--)
        {
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
        }
    }
    n--;

    if (row < m)
    {
        for (int i = n-1; i >= col; i--)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
    }
    row++;

}

int main() {
	faster;
    ll m,n,r,x,y,row,col,t;
    cin >> m >> n >> r;
    ll R=m, C=n;
    vector< vector<ll> > matrix(m,vector<ll>(n));
    for(int matrix_i = 0;matrix_i < m;matrix_i++){
       for(int matrix_j = 0;matrix_j < n;matrix_j++){
          cin >> matrix[matrix_i][matrix_j];
       }
    }

	x = 0;
	y = 0;
	row = m;
	col = n;
	while(x < row && y < col){
	      ll rot = 2*(row-x)+2*(col-y)-4;
	      t = r%rot;
	      for(int i=0;i<t;i++){
	             matrixRotation(matrix,x,y,row,col);
	      }
	      x++;
	      y++;
	      row--;
	      col--;
	} 

    for (int i=0; i<R; i++)
    {
        for (int j=0; j<C; j++)
          cout << matrix[i][j] << " ";
        cout << "\n";
    }
    return 0;
}