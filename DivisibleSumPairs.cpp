#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, int ar[]) {
    int sum=0,ctr=0;
    for(int i=0;i<n-1;i++)
    {   
        for(int j=i+1;j<n;j++)
        {   sum=0;
            sum=ar[i]+ar[j];
            if(sum%k==0)
                ctr++;
        }
    }
    return ctr;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    int ar[n];
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}

