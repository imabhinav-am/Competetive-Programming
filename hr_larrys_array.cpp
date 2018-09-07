/* 
	Author   : Abhinav
   
	Modified : 20-12-2017 09:44:36 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,temp;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		vi v(n);
		for(int i=0; i<n; i++)
			cin >> v[i];
		for (int i=0; i<n-2; i++){
            for (int j=n-2-1; j>=i; j--){
                while (v[j]>v[j+1]||v[j]>v[j+2]) {
               		temp = v[j];
               		v[j] = v[j+1];
               		v[j+1] = v[j+2];
               		v[j+2] = temp;     
                }
            }
        }
		if(v[n-1] < v[n-2])
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	return 0;
}