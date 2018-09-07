#include <bits/stdc++.h>

using namespace std;

long int getMoneySpent(long int keyboards[],long int drives[], int s,int n,int m){
    long int sum,max=-1;
    sort(keyboards,keyboards+n);
    sort(drives,drives+m);
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{	
    		sum=keyboards[i]+drives[j];
			if(sum>s)
    		break;
    		if(sum>max)
    		max=sum;
		}
	}
    return max; 
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    long int keyboards[n];
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    long int drives[m];
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    long int moneySpent = getMoneySpent(keyboards, drives, s,n,m);
    cout << moneySpent << endl;
    return 0;
}

