#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct S{
	int x;
	string st;
};

void insertion_sort(S s[],int n){
	int value,j;
	string str;
	for(int i=0;i<n;i++){
		value=s[i].x;
		str=s[i].st;
		j=i-1;
		while(j>=0 && value<s[j].x){
			s[j+1]=s[j];
			j--;
		}
		s[j+1].x=value;
		s[j+1].st=str;
	}
	for(int i=0;i<n;i++){
		cout<<s[i].st<<" ";
	}
}

int main() {
    int n,i=0,j;
    cin>>n;
    string str;
    S s[n];
    j=n;
    while(j>n/2){
    	cin>>s[i].x;
    	cin>>str;
    	s[i].st="-";
        j--;
	}
	while(j>0){
		cin>>s[i].x;
    	cin>>str;
    	s[i].st=str;
        j--;
	}
	insertion_sort(s,n);
    return 0;
}

