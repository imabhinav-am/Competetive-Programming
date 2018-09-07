#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {
	int k=ar.at(ar.size()-1);
	int loc;
	for(int i=0;i<ar.size();i++){
		if(k<ar.at(i)){
			loc=i;
			break;
		}
	}
	int j=ar.size()-1;
	while(j>loc){
		ar.at(j)=ar.at(j-1);
		for(int x=0;x<ar.size();x++){
			cout<<ar.at(x)<<" ";
		}
		cout<<endl;
		j--;
	}
	ar.at(loc)=k;
	for(int x=0;x<ar.size();x++){
			cout<<ar.at(x)<<" ";
		}
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}

