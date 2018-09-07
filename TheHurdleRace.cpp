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
    int n;
    int k;
    int num;
    cin >> n >> k;
    int height[n];
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    sort(height,height+n);
    if(height[n-1]>k)
    {
		num=height[n-1]-k;
    	cout<<num;
	}
    else
    cout<<"0";
    return 0;
}

