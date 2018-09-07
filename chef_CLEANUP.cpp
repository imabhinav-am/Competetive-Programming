/* 
	Author   : Abhinav
   
	Modified : 12-06-2018 12:52:37 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,m,temp,T;
	cin >> t;
	while(t-- > 0){
		cin >> n >> m;
		vector <int> arr;
		temp = m;
		int i = 0;
		while(temp-- > 0){
			cin >> T;
			arr.emplace_back(T);
		}
		sort(arr.begin(), arr.end());
		i = 0;
		int ctr = 1;
		vector <int> job;
		i = 0;
		while(ctr <= n){
			if(i < arr.size()){
				if(arr[i] == ctr){
					ctr++;
					i++;
				}
				else{
					job.emplace_back(ctr);
					ctr++;
				}
			}	
			else{
				job.emplace_back(ctr);
				ctr++;
			}
		}
		i = 0;
		while(i < job.size()){
			cout << job[i] << " ";
			i+=2;
		}
		cout << "\n";
		i = 1;
		while(i < job.size()){
			cout << job[i] << " ";
			i+=2;
		}
		cout << "\n";
	}
	return 0;
}