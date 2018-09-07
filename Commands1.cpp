#include<iostream>
#include<vector>
using namespace std;
struct cmd
{
	int no;
	int lw;
	int up;
};
void calc(vector<int> &A,vector<cmd> &Cmd,int x,int y)
{
	for(int i=x-1;i<y;i++)
		{
			if(Cmd[i].no==1)
			for(int j=Cmd[i].lw-1;j<Cmd[i].up;j++)
				A.at(j)+=1;
			if(Cmd[i].no==2)
			calc(A,Cmd,Cmd[i].lw,Cmd[i].up);
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
		calc(A,Cmd,0,M);
		for(int i=0;i<N;i++)
		cout<<A.at(i)<<" ";
		cout<<endl;
		n--;
	}
}

