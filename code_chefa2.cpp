#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int t, i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n, j, step=0;
        cin>>n;
        for(j=0;  ; j++)
        {
            if((n/pow(2, j)-1)==0)
            {
                n = n+1;
                step = step + 1;
            }
            else if((n/pow(2, j) - 1) < 0)
                break ;
        }
        double k = log2(n-pow(2, j-1));
        if(n -pow(2, j-1) - pow(2, floor(k))>=(pow(2, ceil(k)) + pow(2, j-1) - n))
            step  = step + pow(2, ceil(k)) + pow(2, j-1) - n;

        else   if(n -pow(2, j-1) - pow(2, floor(k)) <(pow(2, ceil(k)) + pow(2, j-1) - n))
        step = step + n  - pow(2, j-1) - pow(2, floor(k));
        cout<<step<<endl;
    }
}

