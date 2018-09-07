#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,i,j,ctr=0;
    int k;
    cin >> n >> k;
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;
    int A[n+1][n+1]={0};
    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        A[rObstacle][cObstacle]=1;
    }
    for(i=rQueen-1;i>=1;i--)
    {
        if(A[i][cQueen]==1)
            break;
        else
            ctr++;
    }
    for(i=rQueen+1;i<=n;i++)
    {
        if(A[i][cQueen]==1)
            break;
        else
            ctr++;
    } 
    for(j=cQueen-1;j>=1;j--)
    {
        if(A[rQueen][j]==1)
            break;
        else
            ctr++;
    }
    for(j=cQueen+1;j<=n;j++)
    {
        if(A[rQueen][j]==1)
            break;
        else
            ctr++;
    }
    for(i=rQueen-1,j=cQueen-1;i>=1&&j>=1;i--,j--)
    {
        if(A[i][j]==1)
            break;
        else
            ctr++;
    }
    for(i=rQueen+1,j=cQueen-1;i<=n&&j>=1;i++,j--)
    {
        if(A[i][j]==1)
            break;
        else
            ctr++;
    }
    for(i=rQueen-1,j=cQueen+1;i>=1&&j<=n;i--,j++)
    {
        if(A[i][j]==1)
            break;
        else
            ctr++;
    }
    for(i=rQueen+1,j=cQueen+1;i<=n&&j<=n;i++,j++)
    {
        if(A[i][j]==1)
            break;
        else
            ctr++;
    }
    cout<<ctr;
    return 0;
}

