#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int n, t;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		long long int sum = 0;
		while(n > 0){
			sum += n % 10;
			n /= 10;
		}
		cout << sum << "\n";
	}
	return 0;
}
