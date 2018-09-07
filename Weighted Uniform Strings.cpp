#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int> a;
	int i=0,ctr,c=1;
	char ch;
	while(i<s.size())
	{
		ch=s[i];
		ctr=(s[i])-96;
		c=1;
		a.push_back(ctr);
		for(int j=i+1;s[j]==ch;j++)
		{
			c++;
			a.push_back(ctr*c);	
		}
		i+=c;
	}
	int n,flag;
	cin>>n;
	while(n>0)
	{
		int ch;
		cin>>ch;
		flag=1;
		for(int k=0;k<a.size();k++)
		{
			if(ch==a.at(k))
			{
				flag=0;
				cout<<"Yes"<<endl;
				break;
			}
		}
		if(flag==1)
		cout<<"No"<<endl;
		n--;
	}
}
