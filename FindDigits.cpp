#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t,digit,num,ctr=0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        num=n;
        ctr=0;
        
        while(n>0)
        {
            digit=n%10;
           
            if(digit!=0)
            {
                if(num%digit==0)
                    ctr++;
            }
            n=n/10;
        }
        cout<<ctr<<endl;
    }
    return 0;
}

