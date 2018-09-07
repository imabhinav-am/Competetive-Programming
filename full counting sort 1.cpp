#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long int n,x;
    cin>>n;
    string arr[n],s;
    for(long int i=0;i<n/2;i++){
        cin>>x;
        cin>>s;
        arr[x]=arr[x]+"-"+" "; 
    }
    for(long int i=n/2;i<n;i++){
        cin>>x;       
        cin>>s;
        arr[x]=arr[x]+s+" ";
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}
