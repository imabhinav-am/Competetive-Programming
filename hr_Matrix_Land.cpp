#include <bits/stdc++.h>

using namespace std;

int sum = 0,n,m,i=0, j=0;

int compare_3(int x, int y, int z){
  int temp = max(x,y);
  return max(temp,z);
}

int matrixLand(vector < vector<int> > A) {
  int temp;
  for(int j=0; j<n ;j++)
    if(A[i][j] > 0)
      break;
  sum += A[i][j];
  A[i][j] = 0;
  while(i < m && j < n){
    if(i == 0){
      if(j < n-1){
        if(A[i][j+1] > A[i+1][j]){
          j++;
          sum += A[i][j];
          A[i][j] = 0;
        }
        else{
          i++;
          sum += A[i][j];
          A[i][j] = 0;
        }
      }
      else{
        if(A[i][j-1] > A[i+1][j]){
          i++;
          sum+= A[i][j];
          A[i][j] = 0;
        }
      }
    }
    else if(i < m-1){
      if(j < n-1){
        if(A[i][j+1] > 0){
          j++;
          sum += A[i][j];
          A[i][j] = 0;
        }
        else if(A[i][j-1] > 0 && j>0){
          j--;
          sum += A[i][j];
          A[i][j] = 0;
        }
        else{
          if(j == 0){
            if(A[i+1][j] > A[i][j+1]){
              i++;
              sum += A[i][j];
              A[i][j] = 0;
            }
            else{
              j++;
              sum += A[i][j];
              A[i][j] = 0;
            }
          }
          else if(j < n-1){
            temp = compare_3(A[i][j+1],A[i][j-1],A[i+1][j]);
            if(temp == A[i][j+1]){
              j++;
              sum += A[i][j];
              A[i][j] = 0;
            }
            else if(A[i][j-1] == temp){
              j--;
              sum += A[i][j];
              A[i][j] = 0;
            }
            else{
              i++;
              sum += A[i][j];
              A[i][j] = 0;
            }
          }
          else{
            if(A[i][j-1] > A[i+1][j]){
            i++;
            sum+= A[i][j];
            A[i][j] = 0;
            }
          }
        }
      }
      else{
        if(A[i][j-1] > A[i+1][j]){
          i++;
          sum+= A[i][j];
          A[i][j] = 0;
        }
      }
    }
    else{
      if(A[i][j+1] > A[i][j]){
        j++;
        sum += A[i][j];
        A[i][j] = 0;
      }
      else
        break;
    }
  }
  return sum;
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
