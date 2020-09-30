#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int max,n;
	cin>>max>>n;
	long int A[max]={0};
	int x,y,add,i,j,Max=0,sum=0;
	for(i=0;i<n;i++)
	{	cin>>x>>y>>add;		
		 A[x]+=add;
	 	if(y+1<=max)
        A[y+1]-=add;
	}
	for(int k=0;k<max;k++)
	{		
		sum+=A[k];
		if(Max<sum)
		Max=sum;
	}
	cout<<Max;
	return 0;
}
