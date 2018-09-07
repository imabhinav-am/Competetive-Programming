#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int lead = 0, s1=0, s2=0, t, F, S, temp, win = 1;
	cin >> t;
	while(t-- > 0){
		cin >> F >> S;
		s1 += F;
		s2 += S;
		if(abs(s1-s2) > lead){
			lead = abs(s1-s2);
			if(s1 > s2)
				win = 1;
			else if(s2 > s1)
				win = 2;
		}
	}
	cout << win << " " << lead ;
	return 0;
}
