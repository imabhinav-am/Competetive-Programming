#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	long long int n,m,t,sum,r,c1,c2;
	cin>>n>>m>>t;
	sum = n * m;
	while(t-->0){
		cin>>r>>c1>>c2;
		sum = sum - (c2 - c1 + 1);
	}
	cout<<sum;    
    return 0;
}

