#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
struct matrix
{
	int row;
	int col;
	int val;
};
int main()
{
	int n,row,col,val,flag;
	cin>>n;
	while(n>0)
	{
		int N,Q,flag=0;
		cin>>N>>Q;
		vector<matrix> M;
		vector<int> A;
		for(int i=0;i<Q;i++)
		{
			M.push_back(matrix());
			cin>>M[i].row;
			cin>>M[i].col;
			cin>>M[i].val;
		}
		flag=0;
		for(int i=0;i<M.size();i++)
		{	
			for(int j=i+1;j<M.size();j++)
			{
				if(M[i].col==M[j].row)
				{
					row=M[i].row;
					col=M[j].col;
					val=abs(M[i].val-M[j].val);
					for(int k=j;k<M.size();k++)
					{
						if((M[k].row==row && M[k].col==col) || (M[k].col==row && M[k].row==col))
						{
							if(M[k].val!=val)
							{
								flag=1;
								break;
							}
						}
					}
					if(flag==1)
					break;
				}
				if(flag==1)
				break;
			}
			if(flag==1)
			break;
		}
	if(flag==0)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
	n--;
	}
}
