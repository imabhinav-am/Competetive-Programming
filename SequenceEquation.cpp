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
int main() {
    int n,add;
    cin>>n;
    int a[n+1];
    for(int i=1;i<n+1;i++)
    {
        cin>>a[i];
    }
    for(int x=1;x<=n;x++)
    {
        for(int i=1;i<n+1;i++)
        {
            if(a[i]==x)
            { add=i;
                break;
            }
        }
        for(int j=1;j<n+1;j++)
        {
            if(a[j]==add)
                cout<<j<<endl;
        }
    }
    return 0;
}

