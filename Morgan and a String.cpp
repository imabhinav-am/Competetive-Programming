#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1,s2;
    int n;
    cin>>n;
    while(n>0){
    	cin>>s1>>s2;
    	vector<char> c1,c2;
    	int top1=0,top2=0;
    	for(int i=0;i<s1.size();i++){
    		c1.push_back(s1[i]);
		}
		for(int i=0;i<s2.size();i++){
    		c2.push_back(s2[i]);
		}
		c1.push_back('z');
		c2.push_back('z');
		while(top1!=c1.size()-1 && top2!=c2.size()-1){
			if(c1[top1]<c2[top2]){
				cout<<c1[top1];
				top1++;
			}
			else if(c1[top1]==c2[top2]){
				int top_d1=top1,top_d2=top2;
				while(c1[top_d1]==c2[top_d2]){
					top_d1++;
					top_d2++;
				}
				if(top_d1==c1.size()){
					top_d1=top1+1;
					top_d2=top2+1;
				}
				if(c1[top_d1]<c2[top_d2]){
					cout<<c1[top1];
					top1++;
				}
				else{
					cout<<c2[top2];
					top2++;
				}
			}
			else{
				cout<<c2[top2];
				top2++;
			}
		}
		if(top1!=c1.size()-1){
			while(top1!=c1.size()-1){
				cout<<c1[top1];
				top1++;
			}
		}
		if(top2!=c2.size()-1){
			while(top2!=c2.size()-1){
				cout<<c2[top2];
				top2++;
			}
		}
		cout<<endl;
		n--;
	}
    return 0;
}

