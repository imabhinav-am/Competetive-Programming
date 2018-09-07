#include<iostream>
#include<vector>

using namespace std;

int main(){
	long int t;
	cin>>t;
	long long int n,x;
	while(t-->0){
		cin>>n;
		cin>>x;
		vector <long long int> s(n);
		for(int i=0; i<n; i++){
			cin>>s[i];
		}
		int j;
		int flag = 1;
		for(int i=0; i<n-1 && s[i] != x; i++){
			if(x < s[i]){
				j= i+1;
				while(x != s[j]){
					if(s[j] > s[i]){
						flag = 0;
						break;
					}
					j++;
				}
			}
			else if(x > s[i]){
				j = i+1;
				while(x != s[j]){
					if(s[j] < s[i]){
						flag = 0;
						break;
					}
					j++;
				}	
			}
			if(flag == 0){
				break;
			}
		}
		if(flag == 1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
