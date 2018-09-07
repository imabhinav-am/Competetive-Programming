#include<iostream>
using namespace std;
#include<vector>
struct cmd
{
	int no;
	int lw;
	int up;
};
void inc(vector<int> &A,int x,int y)
{
	for(int i=x-1;i<y;i++)
	A.at(i)+=1;
}
void exec_cmd(vector<int> &A,vector<cmd> &Cmd,int i)
{
	for(int j=Cmd[i].lw-1;j<Cmd[i].up;j++)
	{
		if(Cmd[j].no==1)
		inc(A,Cmd[j].lw,Cmd[j].up);
		else
		exec_cmd(A,Cmd,j);
	}
}
void calc(vector<int> &A,vector<cmd> &Cmd)
{
	for(int i=0;i<Cmd.size();i++)
		{
			if(Cmd[i].no==1)
			inc(A,Cmd[i].lw,Cmd[i].up);
			if(Cmd[i].no==2)
			exec_cmd(A,Cmd,i);
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
		for(int i=0;i<M;i++)
		{
			Cmd.push_back(cmd());
			cin>>Cmd[i].no;
			cin>>Cmd[i].lw;
			cin>>Cmd[i].up;
		}
		calc(A,Cmd);
		for(int i=0;i<N;i++)
		cout<<A.at(i)<<" ";
		cout<<endl;
		n--;
	}
}
