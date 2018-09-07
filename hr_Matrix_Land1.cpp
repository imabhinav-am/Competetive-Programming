#include <bits/stdc++.h>

using namespace std;

int m;
int n;

int matrixLand(vector < vector<int> > A) {
  int dp[m+1][n+2];
  memset(dp, 0, sizeof(dp));
  int scr = 0;
  int Col_scr = 0;
  int result = -250;

  for (int i = 0 ; i < m ; i++)
        dp[i+1][0] = -250;

  for (int i = 0 ; i < m ; i++)
        dp[i+1][n+1] = -250;

  for (int i = 1; i <= m; ++i)
  {
    for (int j = 1; j <= n; ++j)
    {
      if(j < Col_scr){
        dp[i][j] = max(A[i-1][j-1],dp[i][j+1]) + scr;
      }
      else{
        dp[i][j] = A[i-1][j-1] + max(dp[i-1][j],dp[i][j-1]);
        A[i-1][j-1] = 0;
      }
      if(scr < dp[i][j]){
        scr = dp[i][j];
        Col_scr = j;
      }
    }
  }

   for (int i = 0; i < m+1; ++i)
    {
      for (int j = 0; j < n+2; ++j)
      {
        cout << dp[i][j] <<" ";
      }
      cout << "\n";
    }

  for (int i=0; i<=n; i++)
        result = max(result, dp[m][i]);
  return result;
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
