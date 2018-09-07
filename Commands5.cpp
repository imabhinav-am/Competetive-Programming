#include<iostream>
#include<vector>
using namespace std;
struct cmd
{
	int no;
	int lw;
	int up;
};
struct inc
{
	int u;
	int l;
	int ctr;
};
int X=0,Y;
int chk(vector<inc> &increment,int x,int y)
{
	for(int i=0;i<increment.size();i++)
	{
		if(increment[i].u==x && increment[i].l==y)
		return i;
	}
	return -1;
}
void calc(vector<int> &A,vector<cmd> &Cmd,vector<inc> &increment,int x,int y)
{
	for(int i=x-1;i<y;i++)
		{
			if(Cmd[i].no==1)
			{
				Y=chk(increment,Cmd[i].up,Cmd[i].lw);
				if(Y>=0)
					increment[Y].ctr+=1;
				else
				{
					increment.push_back(inc());	
					increment[X].u=Cmd[i].up;
					increment[X].l=Cmd[i].lw;
					increment[X].ctr=1;
					X++;
				}
			}
			if(Cmd[i].no==2)
			calc(A,Cmd,increment,Cmd[i].lw,Cmd[i].up);
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
		vector<inc> increment;
		vector<cmd> Cmd;
		X=0;
		for(int i=0;i<M;i++)
		{
			Cmd.push_back(cmd());
			cin>>Cmd[i].no;
			cin>>Cmd[i].lw;
			cin>>Cmd[i].up;
		}
		calc(A,Cmd,increment,1,M);
		for(int i=0;i<increment.size();i++)
		{
			for(int j=increment[i].l-1;j<increment[i].u;j++)
				A[j]=increment[i].ctr;
		}
		for(int i=0;i<N;i++)
		cout<<A.at(i)<<" ";
		cout<<endl;
		n--;
	}
}

