#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int T;
    cin>>T;
    for(int t = 0; t<T; t++){
        int M, N;
        cin>>M>>N;
        int c[N];
        for(int n = 0; n<N; n++){
            cin>>c[n];
        }
        int i, j;
        bool found = false;
        for(i = 0; i<N; i++){
            for(j = i+1; j<N; j++){
                if(c[i]+c[j]==M){
                    found = true;
                    break;
                }
            }
            if(found) 
                break;
        }
        cout<<i+1<<" "<<j+1<<endl;
    }
}
