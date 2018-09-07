#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,k,pos;
    cin>>n>>k;
    vector <long long int> a(n),b(n+1);
    for(int i=0; i<n; i++){
    	cin>>a[i];
    	b[a[i]]= i; 
	}
	for(int i=0; i<n && k>0 ; i++){
		if(a[i] == n-i )
			continue;
		pos = b[n-i];
		b[n-i] = i;
		b[a[i]] = pos;
		swap(a[i],a[pos]);
		k--;
	}
	for(int i=0; i<n; i++){
    	cout<<a[i]<<" ";
	}
    return 0;
}

