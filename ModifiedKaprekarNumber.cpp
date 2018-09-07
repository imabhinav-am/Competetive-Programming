#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
long int p,q,i,mid,flag=0; 
    cin>>p>>q; 
    for( i=p;i<=q;i++){ 
    int l=0; 
    long int k=i*i;
    int j=k;
        while(j!=0)
        {
            l++;
            j=j/10;
        }
        if(l%2==0)
        mid=l/2;
        else
            mid=(l+1)/2;
     long int m=pow(10,mid);
     long int r=k/m;
     long int s=k%m;
     if(s+r==i)
     {   flag=1;
         cout<<i<<" ";
     }
}
    if(flag==0)
        cout<<"INVALID RANGE";
return 0;
}

