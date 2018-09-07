/* 
	Author   : Abhinav
   
	Modified : 02-02-2018 09:27:15 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)
#define forv(i,j,k) for(ll i=j; i>k; i--)


void findMaxSubArrayIndex(vi a){          
      	int start=0,end=0,curr_max=0,prev_max=0,start_o=0,i;

        prev_max = a[0];

        for(i,0,a.size()){
            curr_max += a[i];
            if(curr_max < 0){
                start = i+1;
                curr_max = 0;
            }
            else if(curr_max > prev_max){
                end = i;
                start_o = start;
                prev_max = curr_max;
            }

        }
        ll sum = 0;
        for(i,start_o,end+1){
        	for(j,i+1,end+1){
        		sum += a[i]*a[j];
        	}
        }
        cout << sum << "\n";
}

int main(){
	faster;
	ll n;
	cin >> n;
	vi v(n);
	for(i,0,n)
		cin >> v[i];
	findMaxSubArrayIndex(v);
	return 0;
}