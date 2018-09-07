#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> l;
	long int n,num,min,diff;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>num;
		l.push_back(num);
	}  
	sort(l.begin(),l.end());
	diff = abs(l.at(0)); 
	for(int i=0; i<n-1; i++){
		if(abs(l.at(i)-l.at(i+1))<diff){
			diff = abs(l.at(i)-l.at(i+1));
		}
	}
	cout<<diff;
    return 0;
}

