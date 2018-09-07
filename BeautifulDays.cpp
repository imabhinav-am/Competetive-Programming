#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int num)
{
	int rev=0,rem;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	return rev;
}

bool isFine(float day)
{
	if(day==(int)day)
	return true;
	else 
	return false;
}

int main() {
    int min,max,k,ctr=0,rev;
    float day;
    cin>>min>>max>>k;
    for(int i=min;i<=max;i++)
    {
    	rev=reverse(i);
		day=(float)(abs(i-rev))/(float)k;
		if(isFine(day))
		ctr++;	
	}
	cout<<ctr;
    return 0;
}

