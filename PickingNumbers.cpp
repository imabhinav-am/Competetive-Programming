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
    int n,flag=1,ctr=0,j;
    cin >> n;
    int a[n];
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {	ctr=0;
        if(a[i+1]-a[i]<=1)
        {	ctr=0;
            for(j=i;a[j]-a[i]<=1;j++)
            {
                ctr++;
            }
        }
        if(ctr>flag)
            flag=ctr;
    }
    cout<<flag;
    return 0;
}

