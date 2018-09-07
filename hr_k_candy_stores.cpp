/* 
	Author   : Abhinav
   
	Modified : 27-12-2017 11:49:42 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n = 1000000;
	long long arr[n][n]; 
    for (int line = 0; line < n; line++) {
        for (int i = 0; i <= line; i++){
            if (line == i || i == 0)
            arr[line][i] = 1;
            else
            arr[line][i] = arr[line-1][i-1] + arr[line-1][i];
            if(arr[line][i]>1000000000)
            arr[line][i]=arr[line][i]%1000000000;
            }
    }
    ll t,N,K;
    cin >> t;
    while(t--){
    	cin >> N >> K;
    	cout << arr[N+K-1][N-1] << "\n";
    }
	return 0;
}