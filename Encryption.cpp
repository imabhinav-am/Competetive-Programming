#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main(){
    string a;
    int i,j,n;
    getline(cin, a);
    n=a.size();
    char b[n];
    for(i=0,j=0;i<a.size();i++)
    {	
    	if(a[i]==' ')
    	continue;
    	b[j]=a[i];
		j++;
    	
	}
	float l=strlen(b);
	l=sqrt(l);
	int M=floor(l);
	int N=ceil(l);
	char A[M][N];
	int k=0;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++,k++)
		A[i][j]=b[k];
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		cout<<A[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		cout<<A[j][i];
		cout<<" ";
	}
    return 0;
}

