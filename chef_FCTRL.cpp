#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int t, n;
	cin >> t ;
	while(t-- > 0){
		cin >> n ;
		long long int N = 5, sum = 0;
		while(N <= n){
			sum += n/N;
			N *= 5;
		}
		cout << sum << endl;
	}
	return 0;
}
