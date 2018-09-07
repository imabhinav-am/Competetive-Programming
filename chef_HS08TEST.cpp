#include <iostream>
#include <iomanip>
 
using namespace std;

int main(int argc, char const *argv[])
 {
 	int x;
 	float y;
 	cin >> x >> y ;
 	if(y - 0.50 < x || x % 5 != 0 ){
 		cout << fixed << setprecision(2) << y << endl;
 	}
 	else{
 		cout << fixed << setprecision(2) << y - x - 0.50 ;
 	}
 	return 0;
 } 