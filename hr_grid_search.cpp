#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0; P_i < r; P_i++){
           cin >> P[P_i];
        }
        int ans =0;
        for(int i=0; i < R; i++){
            for(int j=0; j < C; j++){
                if(G[i][j] == P[0][0]){
                    int flag = 0;
                    for(int x=0; x < r; x++){
                        for(int y=0; y < c; y++){
                            if(i+x < R && j+y < C){
                                if(G[i+x][j+y] != P[x][y]){
                                    flag = 1;
                                    break;
                                }
                            }
                            else{
                                flag = 1;
                                break;
                            }
                        }
                        if(flag == 1){
                            break;
                        }
                    }
                    if(flag == 0){
                        ans = 1;
                        cout << "YES\n";
                        break;                
                    }
                }
            }
            if(ans == 1)
                break;
        }
        if(ans == 0)
            cout << "NO\n";
    }
    return 0;
}
