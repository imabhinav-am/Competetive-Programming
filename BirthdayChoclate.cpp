#include <bits/stdc++.h>

using namespace std;

void solve(int n,int s[], int d, int m){
    int sum=0,ctr=0;
    for(int i=0;i<n;i++)
    {   sum=0;
        for(int j=i,k=0;k<m;j++,k++)
        {	
            sum+=s[j];
        }
        if(sum==d)
            ctr++;
    }
    cout<<ctr;
}

int main() {
    int n;
    cin >> n;
    int s[n];
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    solve(n, s, d, m);
    return 0;
}

