#include <bits/stdc++.h>

using namespace std;

int maximumToys(vector <int> prices, int k) {
    sort(prices.begin(),prices.end());
    long sum = 0;
    int i=0,ctr=0;
    while(1){
    	sum += prices[i];
    	if(sum > k)
    		break;
		i++;
		ctr++;
	}
	return ctr;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> prices(n);
    for(int prices_i = 0; prices_i < n; prices_i++){
       cin >> prices[prices_i];
    }
    int result = maximumToys(prices, k);
    cout << result << endl;
    return 0;
}

