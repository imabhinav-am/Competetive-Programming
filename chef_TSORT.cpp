#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
	long long int n;
	cin >> n;
	std::vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr.at(i);
	}
	sort(arr.begin(),arr.end());
	for (int i = 0; i < n; ++i)
	{
		cout << arr.at(i) << "\n";		
	}
	return 0;
}