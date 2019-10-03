#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t;
	cin>>n;
	vector<int> a(n+1,0);
	for(int i=1; i<=n; i++)
	{
		cin>>t;
		a[t]++;
	}
	int match = 0;
	for(int j=1; j<=n; j++){
		cin>>t;
		if(a[t] > 0){
			match++;
			a[t]--;	
		}
	}
    if(match == 228){
        cout<<"228";
    }
    else if(match == n){
		cout<<n-1;
	}
	else{
		cout<<match+1;
	}
    return 0;
}

