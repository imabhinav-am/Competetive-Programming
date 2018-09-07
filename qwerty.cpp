#include<iostream>
#include<vector>

using namespace std;

int main(){
	long int t;
	cin>>t;
	long long int n,x,max,min;
	while(t-->0){
		cin>>n;
		cin>>x;
		min = 0;
		max = 1000000001;
		int flag =1;
		vector <long long int> s(n);
		for(int i=0; i<n; i++){
			cin>>s[i];
			if(s[i] > max || s[i] < min){
				flag = 0;
			}
			if(x < s[i]){
				if(s[i]<max){
					max = s[i];
				}
			}
			else if(x > s[i]){
				if(s[i] > min){
					min = s[i];
				}
			}
		}
		if(flag == 1){
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
}
