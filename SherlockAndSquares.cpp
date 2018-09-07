#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a,b,ctr=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        ctr=0;
        for(int i=1;i*i<=b;i++)
        {
            if(i*i>a && i*i<=b)
                ctr++;
        }
        cout<<ctr<<endl;
    }
    return 0;
}

