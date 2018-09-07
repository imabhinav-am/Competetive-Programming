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
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long int n_3=(int)(n-1/3);
        n_3=3*n_3*(n_3+1)/2;
        long long int n_5=(int)(n-1)/5-1;
        n_5=5*n_5*(n_5+1)/2;
        long long int n_15=(int)(n-1)/15;
        n_15=15*n_15*(n_15+1)/2;
        cout<<n_3+n_5-n_15<<endl;
    }
    return 0;
}

