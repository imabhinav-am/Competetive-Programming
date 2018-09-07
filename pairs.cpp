#include<iostream>
using namespace std;
int main()
{
	int max,diff,ctr=0;
	cin>>max>>diff;
    int A[max];
	for(int i=0;i<max;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<max;i++)
	{
		for(int j=i+1;j<max;j++)
		{
			if((A[j]-A[i])==diff||(A[i]-A[j])==diff)
			ctr++;
		}
	}
	cout<<ctr;
	return 0;
}
