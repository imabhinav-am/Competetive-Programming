#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string A = "hackerrank";
	while(n>0)
	{
		string S,B;
		cin>>S;
		int ctr=0,j=0,k=0,flag=0;
		for(int i=0;i<S.size();i++)
		{
			if(A[k]==S[i])
			{
				B[j]=A[k];
				j++;
				k++;
				ctr++;	
			}
			if(ctr==10)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		n--;
	}
}
