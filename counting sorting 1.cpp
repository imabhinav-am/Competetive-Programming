#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,num;
    int arr[100]={0};
    cin>>n;
	while(n-->0){
		cin>>num;
		arr[num]++;
	}
	for(int i=0;i<100;i++){
		cout<<arr[i]<<" ";
	}  
    return 0;
}

