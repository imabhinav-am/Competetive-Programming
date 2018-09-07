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
    string s;
    cin >> s;
    int N= s.size();
    long long n,res=0,ctr=0,rem,qt;
    cin >> n;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
            ctr++;
    }
    if(ctr!=0)
    {
		rem=n%N;
    	qt=n/N;
    	res=qt*ctr;
	for(int i=0;i<rem;i++)
	{
		if(s[i]=='a')
		res++;
	}
	}
	cout<<res;
    return 0;
}

