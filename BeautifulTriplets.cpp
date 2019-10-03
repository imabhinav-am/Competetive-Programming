#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n,d,ctr=0,i,j,k;
	cin>>n>>d;
	int A[n];
	for(i=0 ; i<n ;i++)
	{
		cin>>A[i];
	}
	//sorting
	sort(A,A+n);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[i]+d==A[j])
			{
				for(k=j+1;k<n;k++)
				{
					if(A[j]+d==A[k])
					ctr++;	
				}	
			}	
		}
	}
	cout<<ctr;//printing the value of count
    return 0;
}

