#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int ar_size, int *ar) {
 
    int small;
    for(int i = 0; i < ar_size-1;i++){
          if(ar[i] > ar[i+1]){
            small = ar[i+1];
            int j = i;
            while(ar[j] > small){
                ar[j+1] = ar[j];
                j--;
            }
            ar[j+1] = small;
        }
        for(int k = 0; k < ar_size; k++)
			cout << ar[k] << " ";
        cout << endl;
    }
}

int main() {
    int n,num;
    int arr[100]={0};
	while(n-->0){
		cin>>num;
		arr[num]++;
	}
	for(int i=0;i<100;i++){
		cout<<arr[i]<<" ";
	}  
	insertionSort(100, arr);
    return 0;
}
