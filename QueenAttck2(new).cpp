#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,i,j,ctr=0;
    int rowup=0,rowdn=0,row=0,col=0,col_left=0,col_right=0,ldiagup=0,rdiagdn=0,ldiagdn=0,rdiagup=0,majdiag=0,minordiag=0;
    int k;
    cin >> n >> k;
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;
    if(k==0)
	{
		row=n-1;
		cout<<row<<endl;
		col=n-1;
		cout<<col<<endl;
		for(i=rQueen-1,j=cQueen-1;i>=1&&j>=1;i--,j--)
		majdiag++;
		for(i=rQueen+1,j=cQueen+1;i<=n&&j<=n;i++,j++)
		majdiag++;
		for(i=rQueen-1,j=cQueen+1;i>=1&&j<=n;i--,j++)
		minordiag++;
		for(i=rQueen+1,j=cQueen-1;i<=n&&j>=1;i++,j--)
		minordiag++;
		cout<<majdiag<<endl;
		cout<<minordiag<<endl;
		ctr=row+col+majdiag+minordiag;	
	} 
	else{
	for(int a0 = 0; a0 < k ; a0++){
	    int rObstacle;
        int cObstacle;
		cin >> rObstacle >> cObstacle;
	if(cQueen==cObstacle)
	{  
    for(i=1,j=cQueen;i<rQueen;i++)
    {
        if(i==rObstacle && j==cObstacle)
            {
				rowup=rQueen-i-1;
				break;
			}
		else
			rowup++;
    }
    for(i=rQueen+1,j=cQueen;i<=n;i++)
    {
        if(i==rObstacle && j==cObstacle)
            {
				rowdn=i-rQueen-1;
				break;
			}
		else
			rowdn++;
    }
    row=rowup+rowdn;
	}
	if(rQueen==rObstacle)
	{
    for(j=1,i=rQueen;j<cQueen;j++)
    {
        if(i==rObstacle && j==cObstacle)
            {
				col_left=cQueen-j-1;
				break;
			}
			else
				col_left++;
 	}
    for(j=cQueen+1,i=rQueen;j<=n;j++)
    {
        if(i==rObstacle && j==cObstacle)
            {
				col_right=j-cQueen-1;
				break;
			}
			else
				col_right++;
    }
    col=col_left+col_right;
	}
	for(i=rQueen-1,j=cQueen-1;i>=1&&j>=1;i--,j--)
		{	
			if(i==rObstacle && j==cObstacle)
			{
				ldiagup=cQueen-j-1;
				break;
			}
			else
				ldiagup++;
		}
		for(i=rQueen+1,j=cQueen+1;i<=n&&j<=n;i++,j++)
		{	
			if(i==rObstacle && j==cObstacle)
			{
				rdiagdn=j-cQueen-1;
				break;
			}
			else
				rdiagdn++;
		}
		majdiag=ldiagup+rdiagdn;		

	cout<<majdiag<<" maj"<<endl;
	for(i=rQueen-1,j=cQueen+1;i>=1&&j<=n;i--,j++)
		{	
			if(i==rObstacle && j==cObstacle)
			{
				rdiagup=j-cQueen-1;
				break;
			}
			else
				rdiagup++;
		}
		for(i=rQueen+1,j=cQueen-1;i<=n&&j>=1;i++,j--)
		{	
			if(i==rObstacle && j==cObstacle)
			{
				ldiagdn=cQueen-j-1;
				break;
			}
			else
				ldiagdn++;
		}
		minordiag=ldiagdn+rdiagup;		
	cout<<minordiag<<" minor"<<endl;
	ctr=row+col+majdiag+minordiag;
	}
	cout<<row<<endl;
	cout<<col<<endl;
	cout<<majdiag<<endl;
	cout<<minordiag<<endl;
    }
    cout<<ctr;
    return 0;
}

