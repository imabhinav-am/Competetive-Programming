#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int t, k, ctr = 0, n;
	cin >> t >> k ;
	while(t-- > 0){
		cin >> n;
		if (n % k == 0)
			ctr++;
	}
	cout << ctr ;
	return 0;
}
