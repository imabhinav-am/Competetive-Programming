#include<iostream>
#include<vector>
using namespace std;
struct cmd
{
	int no;
	int lw;
	int up;
};
int ctr=0,flag=0;
void calc(vector<int> &A,vector<cmd> &Cmd,int x,int y)
{
	if(Cmd[x-1].no==1)
			ctr++;
	for(int i=x-1;i<y;i++)
		{	
			if(Cmd[i].no==2)
			{
				flag=1;
				calc(A,Cmd,Cmd[i].lw,Cmd[i].up);
			}
		}
}
int main()
{
	int n,N,M;
	cin>>n;
	while(n>0)
	{
		cin>>N>>M;
		vector<int> A(N,0);
		vector<cmd> Cmd;
		ctr=0;
		flag=0;
		for(int i=0;i<M;i++)
		{
			Cmd.push_back(cmd());
			cin>>Cmd[i].no;
			cin>>Cmd[i].lw;
			cin>>Cmd[i].up;
		}
		calc(A,Cmd,1,M);
		if(flag==0)
		{
			ctr=0;
			for(int i=0;i<M;i++)
			{
				if(Cmd[i].no==2)
				break;
				else 
				ctr++;
			}
		}
		for(int i=0;i<M;i++)
		{
			if(Cmd[i].no==2)
			break;
			else 
			for(int j=Cmd[i].lw-1;j<Cmd[i].up;j++)
				if(A.at(j)==0)
				A.at(j)=ctr;
		}
		for(int i=0;i<N;i++)
		cout<<A.at(i)<<" ";
		cout<<endl;
		n--;
	}
}

