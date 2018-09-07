#include <iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-->0){
		long long int n,a0,a1,a2,a3;
		long long int ans, min = 99999 ,A0,A1,A3,A4;
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>a0>>a1>>a2>>a3;
			if(a2==0 && a3==0){
				ans = a0 + a1;
				if(a1 <= a0){
					if(min >= ans){
						min = ans;
						A0 = a0;
						A1 = a1;
						A3 = 0;
						A4 = 0;
					}
				}
			}	
		}
		int q,N;
		cin>>q;
		while(q-->0){
			cin>>N;
			if(A3 == 0 && A4 == 0)
				cout<<A0 + N*A1<<endl;
		}
	}
}
