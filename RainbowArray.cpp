#include<iostream>
#include<algorithm>
using namespace std;
int seark(int arr[], int f, int l,int x)
{
    int i;
    for (i=f; i<l; i++)
        if (arr[i] == x)
         return i;
    return -1;
}
int main()
{
	int max,flag=1,ctr,k=0;
	cin>>ctr;
	char B[ctr];
	do{
	cin>>max;
	int A[max];
	for(int i=0;i<max;i++)
	{
		cin>>A[i];
	}
	int mid=(max-1)/2;
	for(int j=0;j<mid;j++)
	{
		if(seark(A,mid,max,A[j])==-1)
		{
			flag=0;
			break;
		}
		else if((seark(A,mid,max,A[j]))+j!=(max-1))
			{
				flag=0;
				break;
			}
	}

	if(flag==1)
	{
		if(A[mid]-A[mid-1]==1 && A[mid]-A[mid+1]==1)
		{
			B[k]='y';
			k++;
		}
		else
	    {
	    	B[k]='n';
	    	k++;
		}
	}
	else 
	{
	    	B[k]='n';
	    	k++;
	}
	ctr--;
}while(ctr!=0);
	for(int l=0;l<k;l++)
	{
		if(B[l]=='y')
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
	return 0;
}
