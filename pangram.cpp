#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int ch=65,flag=1;
	while(ch!=91)
	{
		for(int i=0;i<s.size();i++)
		{
			if(int(s[i])==ch || int(s[i])==ch+32 )
			{
				ch++;
				break;
			}
			else if(i==s.size()-1)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
		break;
	}
	if(flag==0)
	cout<<"not pangram";
	else 
	cout<<"pangram";
}
