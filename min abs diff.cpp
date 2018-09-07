#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr;
	int n,N;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>N;
		arr.push_back(N);
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size();i++)
	{
		if(arr.at(i)>=0)
		{
			cout<<abs(arr[i]-arr[i+1]);
			break;
		}
	}
	
}
