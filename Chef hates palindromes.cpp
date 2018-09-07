#include<iostream>

using namespace std;

int main(){
	int t,n,a;
	cin>>t;
	while(t-->0){
		cin>>n>>a;
		if(a == 1){
			cout<<n<<" ";
			for(int i=0; i<n; i++){
				cout<<"a";
			}
			cout<<endl;
		}
		else if(a == 2){
			if(n == 1)
				cout<<"1 a"<<endl;
			else if(n == 2)
				cout<<"1 ab"<<endl;
			else if(n == 3)
				cout<<"2 aab"<<endl;
			else if(n == 4)
				cout<<"2 aabb"<<endl;
			else if(n == 5)
				cout<<"3 aabab"<<endl;
			else if(n == 6)
				cout<<"3 aaabbb"<<endl;
			else if(n == 7)
				cout<<"3 aaababb"<<endl;
			else if(n == 8)
				cout<<"3 aaababbb"<<endl;	
			else{
				string s = "aabbabaabbab";
				cout<<"4 ";
				for(int i=0,j=0; i<n; i++){
					cout<<s[j];
					j++;
					if(j == 12){
						j=0;
					}
				}
				cout<<endl;
			}
		}
		else{
			char ch = 'a';
			int ctr = 0;
			cout<<"1"<<" ";
			for(int i=0; i<n; i++){
				cout<<ch;
				ch++;
				ctr++;
				if(ctr == a){
					ctr = 0;
					ch = 'a';
				}
			}
			cout<<endl;
		}
	}
}
