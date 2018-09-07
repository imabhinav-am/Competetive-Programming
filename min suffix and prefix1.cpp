#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int min(vector<int> arr)
{
	sort(arr.begin(),arr.end());
	return arr[0];
}
void min_sum(vector<int> arr)
{
	int mn=min(arr);
	for(int i=0;i<arr.size();i++)
	{
		if(arr.at(i)==mn)
		{
			cout<<++i;
			break;
		}	
	}	
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
		min_sum(arr);
		cout<<endl;
		n--;
	}
}
