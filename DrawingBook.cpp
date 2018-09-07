#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    int ctrb=0,ctrf=0;
    if(p%2==0)
    {
        for(int i=0;i<=n;i+=2)
        {   if(i==p)
            break;
            ctrf++;
        }
    }
    else
    {
        for(int j=1;j<=n;j+=2)
            {   
                if(j==p)
                break;
                ctrf++;
            }
    }
    if(n%2==0)
    {
        for(int k=n;k>=0;k-=2)
            {   
                if(k==p || k+1==p)
                break;
                ctrb++;
            }
    }
    else
    {
        for(int l=n;l>=0;l-=2)
            {   
                if(l==p || l-1==p)
                break;
                ctrb++;
            }
    }
    if(ctrf<ctrb)
        return ctrf;
    else
        return ctrb;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}

