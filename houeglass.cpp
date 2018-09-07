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
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
     for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cout<< arr[arr_i][arr_j]<<" ";
       }
       cout<<endl;
    }
   
    
    int k,l,j,ctr=0,sum=0,c=0,lsum=0;
    for(int i=0;i<2;i++)
    {	ctr=0; 
	    c=0;
		k=i;
		l=2;	
    	for( ;k<i+3&&l<6;k++)
    	{	j=c;
    		for(;j<=l;j++)
    		{	ctr++;
    			if(ctr==4||ctr==6)
    			continue;
    			sum=sum+arr[k][j];				
			}
			if(ctr==9)
    			{
    				if(sum>lsum)
    				lsum=sum;
					k=i-1;
    				l++;
    				c++;
    				ctr=0;
    				sum=0;
				}
		}
    }
    cout<<lsum;
	return 0;
}


