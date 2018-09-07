/* 
	Author   : Abhinav
   
	Modified : 13-12-2017 05:04:04 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector <int> arr(n),temp(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
		temp[i] = arr[i];
	}
	sort(temp.begin(), temp.end());
	int ctr = 0,x,y,diff1,diff2;
	for(int i=0; i<n; i++){
		if(arr[i] != temp[i]){
			ctr++;
			if(ctr == 1){
				x = i+1;
				diff1 = abs(arr[i]-temp[i]);
			}
			else{
				diff2 = abs(arr[i]-temp[i]);
				y = i+1;
			}
		}
	}
	if(ctr == 2){
		cout << "yes\nswap " << x << " " << y;
	}
	else if(diff1 == diff2){
		cout << "yes\nreverse " << x << " " << y;	
	}
	else{
		cout << "no";
	}
	return 0;
}