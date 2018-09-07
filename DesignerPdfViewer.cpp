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
    int h[26];
    int ch,j,hmax=0;
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    for(int i=0;i<word.size();i++)
    {
    	ch=word[i];
    	j=97-ch;
		if(h[j]>hmax)
		hmax=h[j];	
	}
	cout<<hmax*word.size();
	return 0;
}

