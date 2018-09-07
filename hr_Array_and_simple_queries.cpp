/* 
	Author   : Abhinav
   
	Modified : 12-12-2017 10:19:47 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,t,a,b,c,x;
	cin >> n >> t;
	vector <int> arr,temp;
	vector <int> :: iterator it;
	for(int i=0; i<n; i++){
		cin >> x;
		arr.push_back(x);
	}
	while(t-- > 0){
		cin >> a >> b >> c;
		for(int i=b-1; i<c; i++){
			temp.push_back(arr[i]);
		}
		arr.erase(arr.begin()+b-1,arr.begin()+c);
		if(a==1){
			it = arr.begin();
			arr.insert(it,temp.begin(),temp.end());
		}
		else{
			it = arr.end();
			arr.insert(it,temp.begin(),temp.end());
		}
		temp.clear();
	}
	cout << abs(arr[0] - arr[n-1]) << "\n";
	for (int i = 0; i < arr.size(); ++i){
		cout << arr[i] << " ";
	}
	return 0;
}
