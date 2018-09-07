/* 
	Author   : Abhinav
   
	Modified : 25-02-2018 07:55:33 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll *st;
 
ll gcd(ll a, ll b){
    if (a < b)
        swap(a, b);
    if (b==0)
        return a;
    return gcd(b, a%b);
}

ll findGcd(ll ss, ll se, ll qs, ll qe, ll si){
    if (ss>qe || se < qs)
        return 0;
    if (qs<=ss && qe>=se)
        return st[si];
    ll mid = ss+(se-ss)/2;
    return gcd(findGcd(ss, mid, qs, qe, si*2+1),
               findGcd(mid+1, se, qs, qe, si*2+2));
}
 
ll findRangeGcd(ll ss, ll se, vi arr,ll n){
    if (ss<0 || se > n-1 || ss>se){
        cout << "Invalid Arguments" << "\n";
        return -1;
    }
    return findGcd(0, n-1, ss, se, 0);
}

ll constructST(vi arr, ll ss, ll se, ll si){
    if (ss==se){
        st[si] = arr[ss];
        return st[si];
    }
    ll mid = ss+(se-ss)/2;
    st[si] = gcd(constructST(arr, ss, mid, si*2+1),
                 constructST(arr, mid+1, se, si*2+2));
    return st[si];
}
 
ll *constructSegmentTree(vi arr, ll n){
   ll height = (ll)(ceil(log2(n)));
   ll size = 2*(ll)pow(2, height)-1;
   st = new ll[size];
   constructST(arr, 0, n-1, 0);
   return st;
}


void sumOfMagicValues(vi v,ll n) {
    ll ans=0,min_e=INT_MAX,max_e=INT_MIN,g;
    for(int i=0;i<n;i++){
        min_e = v[i];
        max_e = v[i];
        for(int j=i+1;j<n;j++){
        	if(v[j] != 0)
            	min_e = min(min_e,gcd(min_e,v[j]));
            else 
            	min_e = 0;
            max_e = max(max_e,(j-i+1)*v[j]);
            ans += (max_e - min_e)*(j-i+1)%mod;
        }
    }
    cout << ans%mod;
}

int main(){
	faster;
	ll n;
	cin >> n;
	vi v(n);
	rep(i,0,n)
		cin >> v[i];
	sumOfMagicValues(v,n);
	return 0;
}