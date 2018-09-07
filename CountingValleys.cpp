#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void count(string a,int n)
{   int i,j,k,flag=1,ctr=0;
	for(i=0;i<n;i++)
	{	flag=1;
		if(a[i]=='D')
		{
			for(j=i;j<n;j++)
			{
				if(a[j]=='U')
				{
					for(k=j;k<n;k++)
					if(a[k]=='D')
					{
						flag=0;
						break;
					}
				}
				if(flag==0)
				break;
			}
		}
		if(flag==0)
		{
			ctr++;
			i=k;
		}
	}
	cout<<ctr;
}

int main() {
    int n;
    cin>>n;
    string a;
   	cin>>a;
    count(a,n);
    return 0;
}

