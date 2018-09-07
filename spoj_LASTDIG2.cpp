#include <bits/stdc++.h>
using namespace std;
int main(){long long t,b,x,y;string a;cin>>t;while(t--){
cin>>a>>b;if(b==0){cout<<"1\n";continue;}a=a[a.size()-1];x=stoi(a);
(x==0||x==1||x==5||x==6)?cout<<x<<"\n":cout;
(x==4)?((b%2==1)?cout<<"4\n":cout<<"6\n"):cout;
(x==9)?((b%2==1)?cout<<"9\n":cout<<"1\n"):cout;
(x==2)?((b%4<=3)?cout<<pow(2,b%4)<<"\n":cout<<"6\n"):cout;
(x==3)?((b%4<=2)?cout<<pow(3,b%4)<<"\n":((b%4==3)?cout<<"3\n":cout<<"1\n")):cout;
if(x==7){y=b%4;if(y==1)cout<<"7\n";else if(y==2)cout<<"9\n";else if(y==3)cout<<"3\n";else cout<<"1\n";}
if(x==8){y=b%4;if(y==1)cout<<"8\n";else if(y==2)cout<<"4\n";else if(y==3)cout<<"2\n";else cout<<"6\n";}}
return 0;}