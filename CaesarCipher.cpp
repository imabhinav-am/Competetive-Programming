#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,x,y,i;
    cin >> n;
    char s[n];
    cin >> s;
    int k;
    cin >> k;
    if(k>26)
    k=k%26;
    for(i=0;i<n;i++)
    {
    	    x=s[i];
    	    if(x>=65 && x<=90 || x>=97 && x<=122){
			y=x+k;
			if(x<90 && y>90)
			{
				y=k-(90-x)+64;
				s[i]=(char)y;
			}
			else if(x<122 && y>122)
			{
				y=k-(122-x)+96;
				s[i]=(char)y;
			}
			else
				s[i]=(char)y;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<s[i];
	}
    return 0;
}

