
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

int n;
void delete_arr(int scores[],int pos)
{	
	for(int i=pos;i<n-1;i++)
	{
		scores[i]=scores[i+1];	
	}
	n--;
}
int main(){
    
    cin >> n;
    int scores[n];
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    int alice[m];
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
    }
    for(int i=0;i<n-1;i++)
    {
    	if(scores[i]==scores[i+1])
        {   
            delete_arr(scores,i);
            i=i-2;
        }
    }
	int li=n-1,j,rank;   
    for(int i=0;i<m;i++){
    int val = alice[i];
    for(j=li;j>=0;j--)
        {
                if(scores[j]>val)
                {
                    rank = j+2;
                    li=j;
                    break;
                }
                if(scores[j]==val){
                    rank = j+1;
                    li=j;
                    break;
                }
        }
                if(j<0)
                 rank=1;
                cout<<rank<<endl;
	}
	return 0;
}

