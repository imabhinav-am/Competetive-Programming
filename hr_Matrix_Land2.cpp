#include <bits/stdc++.h>

using namespace std;

int m;
int n;

int matrixLand(vector < vector<int> > A) {
  int result = 0 ;
 
    // creat 2D matrix to store the sum
    // of the path
    int dp[m+1][n+2];
 
    // initialize all dp matrix as '0'
    memset(dp, 0, sizeof(dp));
 
    // copy all element of first column into
    // 'dp' first column
    for (int i = 1 ; i < m ; i++)
        dp[i+1][0] = -250;

  for (int i = 1 ; i < m ; i++)
        dp[i+1][n+1] = -250;
 
    for (int i = 1 ; i <= m ; i++)
        for (int j = 1 ; j <= n ; j++){
            dp[i][j] = max(dp[i-1][j],
                           max(dp[i][j+1],
                               dp[i][j-1])) + A[i-1][j-1];
          }
    for (int i = 0; i < m+1; ++i)
    {
      for (int j = 0; j < n+2; ++j)
      {
        cout << dp[i][j] <<" ";
      }
      cout << "\n";
    }
 
    // Find maximum path sum that end ups
    // at  any column of last row 'N-1'
    for (int i=0; i<=n; i++)
        result = max(result, dp[m][i]);
 
    // return maximum sum path
    return result ;
}

int main() {
    cin >> m >> n;
    vector< vector<int> > A(m,vector<int>(n));
    for(int A_i = 0;A_i < m;A_i++){
       for(int A_j = 0;A_j < n;A_j++){
          cin >> A[A_i][A_j];
       }
    }
    int result = matrixLand(A);
    cout << result << endl;
    return 0;
}
