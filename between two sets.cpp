#include <bits/stdc++.h>

using namespace std;

void getTotalX(int a[],int b[],int n,int m) {
    int num,ctr=0,flaga=1,flagb=1;
    for(int i=0;i<n;i++)
    {	flaga=1;
        num=a[i];
        for(int j=0;j<n;j++)
        {
            if(num%a[j]!=0)
                {
					flaga=0;
					break;
				}
        }
        if(flaga==1)
        {	flagb=1;
            for(int k=0;k<m;k++)
            {
                if(b[k]%num!=0)
                {
					flagb=0;
					break;
				}
            }
        }
        
        if(flagb==1 && flaga==1)
            ctr++;
    }
    flaga=1;
    flagb=1;
    for(int i=a[n-1]+1;i<=b[0];i++)
    {	flaga=1;
        for(int j=0;j<n;j++)
        {
            if(i%a[j]!=0)
                {
					flaga=0;
					break;
				}
        }
        if(flaga==1)
        {	flagb=1;
            for(int k=0;k<m;k++)
            {
                if(b[k]%i!=0)
                {
					flagb=0;
					break;
				}
            }
        }
        if(flagb==1 && flaga==1)
            ctr++;
    }
    cout<<ctr;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    int a[n];
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int b[m];
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    getTotalX(a, b,n,m);
    return 0;
}

