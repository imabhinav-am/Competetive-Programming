#include<iostream>
#include<vector>
using namespace std;

vector<int> a;
vector<int> m;
int top=-1,topm=0;

int main()
{
	int n,ch,x;
	cin>>n;
	m.push_back(0);
	while(n>0)
	{
		cin>>ch;
		if(ch==1)
		{
			cin>>x;
			if(x>=m.at(topm))
			{
				m.push_back(x);
				topm++;
			}
			a.push_back(x);
			top++;
		}
		else if(ch==2)
		{
			if(m.at(topm)==a.at(top))
			{
				m.pop_back();
				topm--;
			}
			a.pop_back();
			top--;
		}
		else
			cout<<m.at(topm)<<endl;
		n--;
	}
}
