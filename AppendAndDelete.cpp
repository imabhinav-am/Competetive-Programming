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
    string t;
    cin >> t;
    int k,i,j;
    cin >> k;
    if(k>=s.size()+t.size())
    {
        cout<<"Yes";
        return 0;
    }
    for(i=0,j=0;i<s.size()&&j<t.size();i++,j++){
        if(s[i]!=t[j])
		 	break;
   }
    if(i<s.size()&&j<t.size())
    {
	            if((s.size()-i)+(t.size()-j)==k)
                cout<<"Yes";
            else
                cout<<"No";
                return 0;
    }
    if(i<s.size())
    {
    	if(s.size()-i==k || s.size()-i+2==k )
    	cout<<"Yes";
    	else
    	cout<<"No";
    	return 0;
	}
	if(j<t.size())
    {
    	if(t.size()-j==k || t.size()-j+2==k)
    	cout<<"Yes";
    	else
    	cout<<"No";
    	return 0;
	}
	else
		if(k%2==0)
		cout<<"Yes";
		else
		cout<<"No";
    return 0;
}

