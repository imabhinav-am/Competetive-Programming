/* 
	Author   : Abhinav
   
	Modified : 17-02-2018 02:27:30 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;


int main(){
	faster;
	ll n;
	cin >> n;
	vector< pair <int,int> > v(n);
	for(int i=0; i<n; i++)
		cin >> v[i].first;
	for(int i=0; i<n; i++)
		cin >> v[i].second;
	sort(v.begin(), v.end());
	int flag_l = 0, flag_r = 0,sum,j,t=0;
	for(int i=0; i<n-1; i++){
		sum = v[i].first + v[i].second;
		if(sum < v[i+1].first){
			j = i-1;
			t = 0;
			while(j>=0){
				if(v[j].first + v[j].second >= sum){
					t = 1;
				}
				j--;
			}
			if(t == 0){
				flag_l = 1;
				break;
			}	
		}
	}
	for(int i=n-1; i>0; i--){
		sum = v[i].first - v[i].second;
		if(sum > v[i-1].first){
			j = i+1;
			t = 0;
			while(j<n){
				if(v[j].first - v[j].second <= sum){
					t =1;
				}
				j++;
			}
			if(t == 0){
				flag_r = 1;
				break;
			}
		}
	}
	if(flag_l == 0 && flag_r == 0)
		cout << "BOTH";
	else if(flag_l == 0)
		cout << "LEFT";
	else if(flag_r == 0)
		cout << "RIGHT";
	else
		cout << "NONE";
	return 0;
}