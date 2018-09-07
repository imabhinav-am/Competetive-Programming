/* 
    Author   : Abhinav
   
    Modified : 17-12-2017 12:01:38 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;


int maxXor(int l, int r) {
    int max = 0,ctr=0;
    for(int i=l;i<=r;i++)
        for(int j=l;j<=r;j++)
            if((i^j) > max)
                max = i^j;
    return max;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}
