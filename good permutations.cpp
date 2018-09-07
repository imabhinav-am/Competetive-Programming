#include<iostream>
#include<vector>
using namespace std;

void good_per(vector<int> arr)
{
	int temp;
	for(int i=0;i<arr.size()-1;i+=2)
	{
		temp=arr.at(i+1);
		arr.at(i+1)=arr.at(i);
		arr.at(i)=temp;	
	}
	if(arr.size()%2!=0)
	{
		temp=arr.at(arr.size()-1);
		arr.at(arr.size()-1)=arr.at(arr.size()-2);
		arr.at(arr.size()-2)=temp;
	}
	for(int j=0;j<arr.size();j++)
	cout<<arr.at(j)<<" ";
	cout<<endl;
}
int main()
{
	int n,i;
	cin>>n;
	while(n>0)
	{	int N;
		cin>>N;
		vector<int> arr;
		for(i=1;i<=N;i++)
			arr.push_back(i);
		good_per(arr);
		n--;
	}
	
}
