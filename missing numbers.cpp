#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct list{
	int num;
	int f;
};

int main() {
    long long int n1,n2,ctr;
    cin>>n1;
    vector <int> A(n1);
    vector <list> a,b;
    list temp;
    int j=0,k=0;
    for(int i=0; i<n1; i++){
    	cin>>A.at(i);
	}
	sort(A.begin(),A.end());
	for(int i=0; i<n1; i++){
		ctr = 1;
		for(j=i+1; j<n1; j++){
			if(A[j]!=A[i]){
				break;
			}
			ctr++;
		}
		temp.num = A[i];
		temp.f = ctr;
		a.push_back(temp);
		i = i + ctr - 1;
	}
	cin>>n2;
	vector <int> B(n2);
	for(int i=0; i<n2; i++){
    	cin>>B.at(i);
	}
	sort(B.begin(),B.end());
	for(int i=0; i<n2; i++){
		ctr = 1;
		for(j=i+1; j<n2; j++){
			if(B[j]!=B[i]){
				break;
			}
			ctr++;
		}
		temp.num = B[i];
		temp.f = ctr;
		b.push_back(temp);
		i = i + ctr - 1;
	}
	for(int i=0; i<a.size(); i++){
		if(a.at(i).num == b.at(i).num){
			if(a.at(i).f != b.at(i).f)
			cout<<a.at(i).num<<" ";
		}
	}
    return 0;
}

