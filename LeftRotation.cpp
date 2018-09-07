#include<iostream>
using namespace std;
int main()
{
	int max,rot;
	cin>>max>>rot;
	int i,j,k,l,n;
	int A[max],B[rot],C[max-rot],D[max];
	for(i=0;i<max;i++)
	{
		cin>>A[i];
	}
	for(j=0;j<rot;j++)
	{
		B[j]=A[j];
	}
	for(k=0;k<max-rot;k++,j++)
	{
		C[k]=A[j];
	}
	for(l=0;l<max-rot;l++)
	{
		D[l]=C[l];
	}
	for(n=0;l<max&&n<rot;l++,n++)
	{
		D[l]=B[n];
	}
	for(int m=0;m<max;m++)
	{
		cout<<D[m]<<" ";
	}

return 0;
}
