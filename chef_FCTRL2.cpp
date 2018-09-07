#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,l,mul,carry,dig,t;
	cin >> t;
	while(t-- > 0){
		cin>>n;
	    int a[1000]={0};
	    a[0]=1;
	    l=1;
	    for(int i=2;i<=n;i++)
	    {   carry=0;
	        for(int j=0;j<l;j++)
	        {
	           mul=i*a[j]+carry; 
	           dig=mul%10;
	           a[j]=dig;
	           carry=mul/10;
	        }
	     	while(carry>0)
	     	{
	         l++;
	         dig=carry%10;
	         a[l-1]=dig;
	         carry=carry/10;
	     	}
	    }
	    for(int i=l-1;i>=0;i--)
	        cout<<a[i];
	    cout << endl ;
	}
    return 0;
}
