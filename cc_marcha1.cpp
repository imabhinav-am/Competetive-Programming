    /* 
    	Author   : Abhinav
       
    	Modified : 12-06-2018 01:51:26 AM
    */ 
     
    #include <bits/stdc++.h>
     
    using namespace std;
     
    typedef long long ll;
    typedef vector<ll> vi;
     
    #define faster  ios_base::sync_with_stdio(false);cin.tie(0);
     
    const ll mod = 1e9+7;
     
    #define rep(i,j,k) for(ll i=j; i<k; i++)
    #define repv(i,j,k) for(ll i=j; i>k; i--)
     
    bool foo(vi v, ll n, ll sum){
    	if(sum == 0){
    		//cout << "yes\n";
    		return true;
    	}
    	if(n==0 && sum!=0)
    		return false;
    	if(v[n-1]>sum)
    		return foo(v,n-1,sum);
    	//cout << sum-v[n-1] << "\n";
    	return foo(v,n-1,sum) || foo(v,n-1,sum-v[n-1]);
    }
     
    int main(){
    	faster;
    	ll t,n,m;
    	cin >> t;
    	while(t--){
    		cin >> n >> m;
    		vi v(n);
    		rep(i,0,n)
    			cin >> v[i];
    		if(foo(v,n,m))
    			cout << "Yes\n";
    		else
    			cout << "No\n";
    	}
    	return 0;
    } 