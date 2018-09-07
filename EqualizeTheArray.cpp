#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,max=0,ctr=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {   ctr=0;
        if(a[i]==a[i+1])
            for(int j=i;a[j]==a[j+1];j++)
                ctr++;
        if(ctr>max)
            max=++ctr;
    }
    if(ctr==0)
    cout<<--n;
    else
    cout<<n-max;
    return 0;
}

