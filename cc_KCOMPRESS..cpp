/* 
	Author   : Abhinav
   
	Modified : 10-08-2018 11:06:39 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll kcompress(vi a, vi b,ll k,ll n){
	ll lw,hh,mx,ff=1;
	rep(i,1,n+1){
		lw = max(ff,i-k);
		hh = min(n,i+k);
		cout << "Low = " << lw << " High = " << hh << "\n";
		vi tp(a);
		sort(tp.begin()+lw,tp.begin()+hh+1);
		map<ll,ll> m;
		ll ctr=1;
		/*for(auto itr=tp.begin(); itr!=tp.end(); itr++)
			cout << *itr << " ";
		cout << "\n";*/
		for(auto itr=tp.begin()+lw; itr!=tp.begin()+hh+1; itr++){
			//if(!m[*itr]){
				m[*itr] = ctr;
				ctr++;
			//}
			//cout << m[*itr] << "\n";
		}
		/*for(auto it=m.begin(); it!=m.end(); it++)
			cout << it->first << " " << it->second << "\n";*/
		for(int j=lw; j<=hh; j++){
				b[j] = m[a[j]];
		}
	}
	cout << "K = " << k << "\n";
		rep(i,0,n+1)
			cout << b[i] << " ";
		cout << "\n";
	cout << accumulate(b.begin(), b.end(), 0) << "\n"; 
	return accumulate(b.begin(), b.end(), 0);
}

int main(){
	faster;
	ll t,n,s,sum,ctr;
	cin >> t;
	while(t--){
		cin >> n >> s;
		vi a(n+1);
		rep(i,1,n+1)
			cin >> a[i];
		ctr=0;
		for(int k=0; k<=n; k++){
			vi b(n+1,0);
			b[0] = 0;
			sum = kcompress(a,b,k,n);
			if(sum<=s) ctr++;
		}
		cout << ctr << "\n";
	}
	return 0;
}