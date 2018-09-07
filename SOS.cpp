#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char S[100];
	cin>>S;
	int ctr=0;
	for(int i=0;i<strlen(S);i+=3)
	{
			if(S[i]!='S')
			ctr++;
			if(S[i+1]!='O')
			ctr++;
			if(S[i+2]!='S')
			ctr++; 
	}
	cout<<ctr;
}

