#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		int A[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> A[i];
		}
		int max_sum = 0, ctr = 0;
		for(int i=0; i<n ;i++){
			for(int j = i+1; j < n;j++){
				if(A[i]+A[j] > max_sum){
					max_sum = A[i] + A[j];
					ctr = 1; 
				}
				else if(A[i]+A[j] == max_sum)
					ctr++;
			}
		}
		int tot = n*(n-1)/2;
		double prob = (double)ctr/tot;
		if(prob == 1)
			cout << setprecision(9) << showpoint << prob << "\n";
		else
			cout << setprecision(8) << showpoint << prob << "\n";
	}
	return 0;
}
