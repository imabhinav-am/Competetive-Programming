#include <bits/stdc++.h>

using namespace std;

int main() {
    int h;
    int w;
    int temp;
    long long int result = 0;
    cin >> h >> w;
    int s[h+2][w+2];
    memset(s,0,sizeof(s));
    for(int i=1; i< h+1; i++){
      for (int j = 1; j < w+1; ++j){
        cin >> s[i][j];
      }
    }
    for(int i=1; i<h+1; i++){
      for (int j = 1; j <w+1; ++j){
        temp = s[i][j] - s[i-1][j];
        if(temp > 0)
          result += temp;
        temp = s[i][j] - s[i+1][j];
          if (temp > 0)
            result += temp;
        temp = s[i][j] - s[i][j-1];  
          if(temp > 0)
            result += temp;
        temp = s[i][j] - s[i][j+1];
          if(temp > 0)
            result += temp;
      }
    }
    cout << result + 2*h*w ;
    return 0;
}
