#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
    long sum = 0;
    sort(calories.begin(),calories.end());
    for(int i=calories.size()-1,j=0; i>=0; i--,j++){
    	sum = sum + calories.at(i)*pow(2,j);
	}
	cout<<sum;
    return 0;
}

