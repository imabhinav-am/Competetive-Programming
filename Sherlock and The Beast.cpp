#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int n5 = n - (n % 3);
    	int n3 = n - n5;
    	while (n3 % 5 != 0)
        	n3 += 3;
    	n5 = n - n3;
    	if(n3>=0 && n5>=0){
    		while(n5-->0)
    			cout<<"5";
			while(n-->0)
				cout<<"3";
			cout<<endl;
		}
		else
			cout<<"-1"<<endl;
    }
    return 0;
}

