#include <bits/stdc++.h>

using namespace std;

int prime(int n){
	bool isPrime = true;
for(int i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      return 1;
  else
      return 0;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int a;
        int b;
        int x;
        cin >> a >> b >> x;
        vector <int> r;
       for(int i=a; i<=b; i++){
       		int flag = 0;
       		if(i!=1){
       			if(prime(i))
       			{
					x--;
					r.push_back(i);
					continue;
				}
       		}
       		for(int j=i+1; j<=b; j++){
				if(j%i == 0){
					flag=1;
					break;
				}
			   }
			if(flag == 0){
				x--;
				r.push_back(i);
			}
			if(x==0){
				break;
			}
	   }
	   if(x!=0){
	   	cout<<"-1"<<endl;
	   }
	   else{
	   	for(int i=0; i<r.size(); i++){
	   		cout<<r[i]<<" ";
		   }
		   cout<<endl;
	   }
    }
    return 0;
}

