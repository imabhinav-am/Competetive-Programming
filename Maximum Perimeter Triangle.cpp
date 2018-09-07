#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector <int> a(n);
	for(int i=0; i<n; i++){
		cin>>a.at(i);
	} 
	sort(a.begin(),a.end());
	int i, flag=0;
	for(i=a.size()-1; i>=2; i--){
		if(a[i-2]+a[i-1] > a[i]){
			if(a[i-1] +a[i] > a[i-2]){
				if(a[i-2] + a[i] > a[i-1]){
					flag = 1;
					break;
				}
			}
		}
	}
	if(flag == 1)
		cout<<a[i-2]<<" "<<a[i-1]<<" "<<a[i];
    else
    	cout<<"-1";
	return 0;
}

