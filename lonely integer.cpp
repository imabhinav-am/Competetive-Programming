#include <bits/stdc++.h>

using namespace std;

int lonelyinteger(vector <int> a) {
    sort(a.begin(),a.end());
    int i=0;
    while(i<a.size()){
    	if(i==a.size()-1)
    		break;
        else if(a.at(i)!=a.at(i+1))
            break;
        i+=2;
    }
    return a.at(i);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = lonelyinteger(a);
    cout << result << endl;
    return 0;
}

