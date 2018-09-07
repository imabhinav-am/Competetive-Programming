#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long t,n;
    cin>>t;
    while(t-->0){
    cin>>n;
    vector <string> s(n);
    for(int i=0; i<n; i++){
    	cin>>s.at(i);
    	sort(s.at(i).begin(),s.at(i).end());
	}
	bool flag = true;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(s.at(j).at(i) > s.at(j+1).at(i)){
				flag = false;
				break;
			}
		}
		if(flag == false){
			break;
		}
	}
	if(flag == false){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
	}
    return 0;
}

