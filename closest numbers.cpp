#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;


int main() {
    long long int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	} 
	sort(arr,arr+n);
	int diff[n];
	adjacent_difference(arr,arr+n,diff);
	long long int min;
	min = *min_element(diff+1,diff+n);
	for(int i=1;i<n;i++){
		if(diff[i]==min){
			cout<<arr[i-1]<<" "<<arr[i]<<" ";
		}
	}
    return 0;
}

