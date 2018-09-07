#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int prefix(vector<int> arr,int ind)
{	
	if(ind==0)
	return arr.at(0);
	else
		return arr.at(ind) + prefix(arr,--ind);
}
int suffix(vector<int> arr,int ind)
{	
	if(ind==arr.size()-1)
	return arr.at(ind);
	else
		return arr.at(ind) + suffix(arr,++ind);
}
int max_sum(vector<int> arr)
{
	sort(arr.begin(),arr.end());
	int s1;
	s1=prefix(arr,0);
	int s2;
	s2=suffix(arr,0);
	return s1+s2;
}
void m_sum(vector<int> arr)
{
	int s1,s2,i=0,min,index=0,max_s,n=arr.size();
	s1=prefix(arr,i);
	s2=suffix(arr,i);
	min=s1+s2;
	max_s=max_sum(arr);	
	while(n>1)
	{	i++;
		s1=prefix(arr,i);
		s2=suffix(arr,i);
		if(s1+s2<min)
		{
			min=s1+s2;
			index=i;
		}
		if(min==max_s)
		break;
		n--;
	}
	cout<<++index;
}
int main()
{
	int n,num,i,N;
	cin>>n;
	while(n>0)
	{
		vector<int> arr;
		cin>>N;
		for(i=0;i<N;i++)
		{
			cin>>num;
			arr.push_back(num);
		}
		m_sum(arr);
		cout<<endl;
		n--;
	}
}
