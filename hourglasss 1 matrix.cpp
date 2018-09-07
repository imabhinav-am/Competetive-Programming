#include<iostream>
using namespace std;
int main()
{
	int A[3][3];
	int sum=0,ctr=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>A[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
    for(int k=0;k<3;k++)
    {
    	for(int l=0;l<3;l++)
    	{   ctr++;
    		if(ctr==4||ctr==6)
    		continue;
    		sum=sum+A[k][l];
    		cout<<sum<<" ";
		}
	}
	cout<<endl<<sum;
return 0;
}
