#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,ctr;
    cin >> n;
    int arr[n];
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    while(n>0)
    {   ctr=0;
        sort(arr, arr+n, greater<int>());
        cout<<n<<endl;
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i]-arr[n-1];
            if(arr[i]==0)
                ctr++;
        }
        n=n-ctr;
    }
    return 0;
}

