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
void partition(vector <int>  ar) {
   int temp,pivot,index=ar.size()-1;
   pivot=ar.at(0);
   for(int i=ar.size()-1;i>=1;i--){
   		if(ar.at(i)>=pivot){
   			temp=ar.at(i);
   			ar.at(i)=ar.at(index);
   			ar.at(index)=temp;
   			index--;
		   }
   }
   temp=ar.at(index);
   ar.at(index)=ar.at(0);
   ar.at(0)=temp;
   for(int i=0;i<ar.size();i++){
   		cout<<ar.at(i)<<" ";
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

   partition(_ar);
   
   return 0;
}

