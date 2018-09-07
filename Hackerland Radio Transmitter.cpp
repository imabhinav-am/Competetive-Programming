#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector <int> l;
	long long int n,num,k;
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>num;
		l.push_back(num);
	}
	sort(l.begin(),l.end());
	long long int left=0,right=0,numb=0;
	for(int i=0; i<n; i++){
		if(l[i] <= right){
			continue;
		}
		if(left == 0){
			left = l[i];
		}
		else if(l[i] - left > k){
			numb++;
			right = l[i-1]+k;
			if (l[i] - l[i-1] <=k ){
				left = 0;
			}
			else
				left = l[i];
			}
	}
	if(left != 0){
		cout<<numb + 1;
	}
	else 
		cout<<numb;
}
