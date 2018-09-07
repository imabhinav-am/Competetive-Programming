#include<iostream>

using namespace std;

int main()
{
	long long int n ,p, t;
	cin>>t;
	while(t-->0){
		cin>>n>>p;
		char *s = new char[p+1];
		s[p] = '\0';
		if(p == 1 || p == 2){
				cout<<"impossible"<<endl;
			}			
		else if(p == n){
			if(p == 2)
				cout<<"impossible"<<endl;
			else{
				cout<<"a";
				for(int i=1; i<n-1; i++){
					cout<<"b";
				}
				cout<<"a"<<endl;
			}
		}
		else if (n%p==0) {
			s[0]='a';
			if(p-1 == 1)
				s[p-1]='b';
			else{
				for(int i=1; i<p-1; i++){
					s[i]='b';
				}	
				s[p-1]='a';
			}
			for(int i=0; i<n/p; i++){
				cout<<s;
			}
			cout<<endl;
		}
		else{
			cout<<"impossible"<<endl;
		}
	}
}
