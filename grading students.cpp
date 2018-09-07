#include <bits/stdc++.h>

using namespace std;

void solve(int grades[],int max){
    // Complete this function
     int n;
    int result[max];
     for(int i = 0; i < max; i++)
	 {
       		if(grades[i]>40 && grades[i]!=100)
			{
         		n=grades[i];
        		n=n/10;
         	if((n*10+5)-grades[i]>0 && (n*10+5)-grades[i]<3)
           		{
				   result[i]=n*10+5;
				   continue;
				}
			if((n+1)*10-grades[i]>0 && (n+1)*10-grades[i]<3)
           		{
				   result[i]=(n+1)*10;
				   continue;
				}
         	}
      		if(grades[i]>=38 && grades[i]<40)
          		result[i]=40;
    		else 
            	result[i]=grades[i];
    }
   for(int j=0;j<max;j++)
       cout<<result[j]<<endl;
}

int main() {
    int max;
    cin >> max;
    int grades[max];
    for(int grades_i = 0; grades_i < max; grades_i++){
       cin >> grades[grades_i];
    }
    solve(grades,max);
    return 0;
}

