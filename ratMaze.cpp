#include<iostream>
using namespace std;
bool safe(int x,int y,int maze[4][4])
{
	 if(x >= 0 && x < 4 && y >= 0 && y < 4 && maze[x][y] == 1)
        return true;
        
        return false;
}
void print(int sol[4][4])
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		cout<<sol[i][j]<<" ";
		cout<<endl;
	}
}
bool solveMaze(int maze[4][4],int x,int y,int sol[4][4])
{
	if(x==3 && y==3)
	{
		sol[x][y]=1;
		return true;
	}
	if(safe(x,y,maze)==true)
	{
		sol[x][y]=1;
		if(solveMaze(maze,x+1,y,sol)==true)
		return true;
		if(solveMaze(maze,x,y+1,sol)==true)
		return true;
		sol[x][y]=0;
		return false;
	}
	return false;
}
int main()
{
	 int maze[4][4]  =  { {1, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    int sol[4][4] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    
    for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		cout<<maze[i][j]<<" ";
		cout<<endl;
	}
 
 	cout<<endl;
 	cout<<endl;
 	
    if(solveMaze(maze, 0, 0, sol) == false)
    printf("Solution doesn't exit");
  	else 
    print(sol);
}
