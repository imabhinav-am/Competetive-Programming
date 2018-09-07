/* 
	Author   : Abhinav
   
	Modified : 25-08-2018 08:45:44 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define make_pair mp

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll t,n,z1,z2,a,b,x,y,w,z,c,d,ch1,ch2,x2,y2,w2,t2;
	cin >> t;
	while(t--){
		cin >> n >> z1 >> z2;
		cin >> a >> b;
		c = -1*a;
		d = -1*b;
		int ct=1;
		ll s=0;
		ll ctr=0;
		while(s!=z1 && s!=z2){
			x = abs(z1-(s+a));
			y = abs(z1-(s+b));
			w = abs(z1-(s+c));
			z = abs(z1-(s+d));
			ch1 = min(x,min(y,min(w,z)));
			x2 = abs(z2-(s+a));
			y2 = abs(z2-(s+b));
			w2 = abs(z2-(s+c));
			t2 = abs(z2-(s+d));
			ch2 = min(x,min(y,min(w,z)));
			if(ch1<=ch2){
				if(ch1==x) s+=a;
				else if(ch1==y) s+=b;
				else if(ch1==w) s+=c;
				else if(ch1==z) s+=d;

			}
			else{
				if(ch2==x2) s+=a;
				else if(ch2==y2) s+=b;
				else if(ch2==w2) s+=c;
				else if(ch2==t) s+=d;
			}
			if(ct==1) ct=2;
			else ct=1;
			ctr++;
			if(ctr>10000){
				ct=0;
				break;
			}
		}
		cout << ctr << "\n";
		if(ct==1) cout << "2\n";
		else if(ct==2) cout << "1\n";
		else	cout << "0\n";
	}
	return 0;
}