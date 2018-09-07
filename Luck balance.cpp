#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,num,t,diff=0;
	cin>>n>>k;
	vector <int> imp;
	long sum = 0;
	while(n-->0){
		cin>>num>>t;
		if(t == 1){
			imp.push_back(num);
		}
		else{
			sum+=num;
		} 
	}
	sort(imp.begin(),imp.end());
	int d = imp.size() - k;
	int i=0;
	while(d-->0){
		diff += imp.at(i);
		i++;
	}
	for(; i<imp.size(); i++){
		sum += imp.at(i);
	}
	cout<<sum-diff<<endl;
    return 0;
}

