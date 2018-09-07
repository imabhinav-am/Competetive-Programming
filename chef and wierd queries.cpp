#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	long long int N;
	cin>>N;
	while(N-->0){
		long long int n,s;
		int i=1;
		cin>>n;
		while(n>=i*i){
			s=i;
			i++;
		}	
		long long int sum=s*n;
		i=1;
		if(n>26*26){
			while(i<=26){
			sum-=((n-700)+i*i);
			i++;
			s--;
			}
		}
		while(s-->0){
			sum-=i*i;
			i++;
		}
		cout<<sum<<endl;
	}
}
