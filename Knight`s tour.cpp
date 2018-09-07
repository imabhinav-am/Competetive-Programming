#include<iostream>
using namespace std;
bool issafe(int x,int y,int sol[8][8])
{
	return (x>=0 && x<8 && y>=0 && y<8 && sol[x][y]==-1);
}
void print(int sol[8][8])
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		cout<<sol[i][j]<<" ";
		cout<<endl;
	}
}
bool solve(int x,int y,int movei,int sol[8][8],int xMove[8],int yMove[8])
{
	int k,next_x,next_y;
	if(movei==64)
	return true;
	
	for(k=0;k<8;k++)
	{
		next_x=x+xMove[k];
		next_y=y+yMove[k];
		if(issafe(next_x,next_y,sol))
		{
			sol[next_x][next_y]=movei;
			if(solve(next_x,next_y,movei+1,sol,xMove,yMove)==true)
				return true;
			else
				sol[next_x][next_y]=-1;
		}
	}
	return false;
}
int main()
{
	int sol[8][8];
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		sol[i][j]=-1;
    }
	int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
    sol[0][0]=0;
    if(solve(0,0,1,sol,xMove,yMove)==false)
		{
			cout<<"no solution"<<endl;
				for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		cout<<sol[i][j]<<" ";
		cout<<endl;
	}
}
    else
     	print(sol);
    
}
