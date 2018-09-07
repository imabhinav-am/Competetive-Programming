#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int m,n,ctr=0;
	cin>>m;
	char A[m][20];
	for(int i=0;i<m;i++)
	{
		cin>>A[i];
	}
	cin>>n;
	char B[n][20];
	for(int j=0;j<n;j++)
	{
		cin>>B[j];
	}
	char S[20];
	for(int k=0;k<n;k++)
	{
		strcpy(S,B[k]);
		for(int l=0;l<m;l++)
		{
			if(strcmp(S,A[l])==0)
			ctr++;			
		}
		cout<<ctr<<endl;
		ctr=0;
	}
	return 0;
}
