#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,ctr=0;
    cin>>n;
    vector <long long int> w(n);
    for(int i=0; i<n; i++)
    	cin>>w.at(i);
    sort(w.begin(), w.end());
    int flag,i,j;
    for( i=0; i<n; i++){
    	if(i!=n-1)
    		j = i+1;
		flag=0;
    	while(w[j] <= w[i]+4){
			j++;
    		flag =1;
    	}
    	if(flag == 1)
    		i= j-1;
    	ctr++;
	}
	cout<<ctr;
    return 0;
}

