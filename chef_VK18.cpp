/* 
	Author   : Abhinav
   
	Modified : 04-12-2017 11:20:05 PM
*/ 
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
ll temp[2000005];
 
const ll mod = 1e9+7;

ll getMid(ll s, ll e) {  return s + (e -s)/2;  }
 
ll constructSTUtil(ll arr[], ll ss, ll se, ll *st, ll si){
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    ll mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}

ll *constructST(ll arr[], ll n){
    ll x = (ll)(ceil(log2(n))); 
 
    
    ll max_size = 2*(ll)pow(2, x) - 1; 
 
    ll *st = new ll[max_size];
 
    constructSTUtil(arr, 0, n-1, st, 0);
 
    return st;
}

ll getSumUtil(ll *st, ll ss, ll se, ll qs, ll qe, ll si){
    if (qs <= ss && qe >= se)
        return st[si];

    if (se < qs || ss > qe)
        return 0;
    ll mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}

ll getSum(ll *st, ll n, ll qs, ll qe){
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,r,r1,r2,digit=0,sum_e=0,sum_o=0,sum=0,sum1=0;
	temp[0] = 0;
	temp[1] = 1;
	for(ll i=2; i<=2000005; i++){
		r = i;
			sum_e = 0;
			sum_o = 0;
			while(r > 0){
				digit = r % 10;
				if(digit % 2 == 0)
					sum_e += digit;
				else
					sum_o += digit;
				r = r / 10;
			}
			sum = abs(sum_e - sum_o); 
			temp[i] = sum + temp[i-1];
	}
	ll num = sizeof(temp)/sizeof(temp[0]);
	ll *st = constructST(temp, num);
	cin >> t;
	while(t-- > 0){
		cin >> n;
		sum = getSum(st, num, n+1, 2*n);
		sum1 = getSum(st, num, 1, n);
		cout << sum - sum1 << "\n";
	}
	return 0;
} 