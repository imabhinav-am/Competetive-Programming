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
    int n,d,flag=0;
    cin >> n;
    int A[n];
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
    d=n-1;
    for(int i=0;i<n;i++)
    {	
		for(int j=i+1;j<n;j++)
        {
            if(A[i]==A[j])
            {   flag=1;
                if(abs(j-i)<d)
                    d=abs(j-i);
            }
        }
    }
    if(flag==0)
        cout<<"-1";
    else
        cout<<d;
    return 0;
}

