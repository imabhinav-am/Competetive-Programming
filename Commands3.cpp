#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct cmd
{
	int no;
	int lw;
	int up;
};
int ctr=0;
void calc(vector<int> &A,vector<cmd> &Cmd,int x,int y)
{
	for(int i=x-1;i<y;i++)
		{
			if(Cmd[i].no==1)
			fill(A.begin()+Cmd[i].lw-1,A.begin()+Cmd[i].up,++A.at(Cmd[i].lw-1));
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
		calc(A,Cmd,1,M);
		for(int i=0;i<N;i++)
		cout<<A.at(i)<<" ";
		cout<<endl;
		n--;
	}
}

