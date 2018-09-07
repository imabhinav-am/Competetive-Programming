#include <bits/stdc++.h>

using namespace std;
int n;


int main() {
	int i,j;
    cin >> n;
    char s[1000];
    cin >> s;
    
    for(i=0;i<n;i++)
    cout<<s[i];
    char c[n];
    strcpy(c,s);
    sort(c,c+n);
    for(i=0;i<n;i++)
    {
    	if(s[i]==s[i+1])
    	{
    		delete_val(s,i);
    		i--;
		}
	}
	for(i=0;i<n;i++)
	cout<<c[i];
    return 0;
}

