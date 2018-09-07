#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    int ctr=0;
    for(int i=0;i<n;i++)
    {	
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j] && ar[i]!=0)
            {	
                ctr++;
                ar[i]=0;
                ar[j]=0;
                break;
            }
        }
    }
    return ctr;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}

