#include<iostream>
#include<vector>
using namespace std;

vector<char> s;
int top;

int main()
{
	int n;
	cin>>n;
	string exp;
	char ch;
	while(n>0){
	int i=0,flag=1;
	cin>>exp;
	top=-1;
	while(exp[i]!='\0' && flag!=0)
	{
		ch=exp[i];
		if(ch=='{' || ch=='[' || ch=='(')
		{
			s.push_back(ch);
			top++;
		}
		else if(ch==')')
		{
			if(top==-1)
			{
				flag=0;
				break;
			}
			while(s.back()!='(')
			{
				if(s.back()=='[' || s.back()=='{')
				{
					flag=0;
					break;
				}
				s.pop_back();
				top--;		
			}
			s.pop_back();
			top--;		
		}
		else if(ch==']')
		{
			if(top==-1)
			{
				flag=0;
				break;
			}
			while(s.back()!='[')
			{
				if(s.back()=='{' || s.back()=='(')
				{
					flag=0;
					break;
				}
				s.pop_back();
				top--;		
			}
			s.pop_back();
			top--;		
		}
		else if(ch=='}')
		{
			if(top==-1)
			{
				flag=0;
				break;
			}
			while(s.back()!='{')
			{
				if(s.back()=='[' || s.back()=='(')
				{
					flag=0;
					break;
				}
				s.pop_back();
				top--;		
			}
			s.pop_back();
			top--;	
		}
		i++;				
	}
	if(flag==0 || top!=-1)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
	n--;
	}
}
