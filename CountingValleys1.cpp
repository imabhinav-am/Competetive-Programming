#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void count(string a,int n)
{	int prev,cur=0,ctr=0,next;
	for(int i=0;i<n-1;i++)
	{
		prev=cur;
		if(a[i]=='D')
		cur--;
		else
		cur++;
        next=cur;
        if(a[i+1]=='D')
		next--;
		else
		next++;
        if(cur==0 && prev<0)
		ctr++;
	}
	cout<<ctr;
}

int main() {
    int n;
    cin>>n;
    string a;
   	cin>>a;
    count(a,n);
    return 0;
}

