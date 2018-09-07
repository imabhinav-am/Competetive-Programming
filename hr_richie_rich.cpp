/* 
	Author   : Abhinav
   
	Modified : 23-02-2018 02:26:43 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)
#define forv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n,t,mid,d=0,flag = 0;
	string s;
	cin >> n >> t;
	cin >> s;
	if(n%2 == 0)
		mid = n/2;
	else
		mid = (n+1)/2;
	string l = s.substr(0,n/2);
	string r = s.substr(mid,n/2);
	//cout << l << " " << r << "\n";
	reverse(r.begin(), r.end());
	for(i,0,n/2)
		if(l[i] != r[i])
			d++;
	for(i,0,n/2){
		if(l[i] == r[i] && l[i]!='9' && r[i]!='9'){
			if(t-2 >= d){
				t -= 2;
				l[i] = '9';
				r[i] = '9';
			}
		}
		else if(l[i] != r[i] && (l[i] == '9' || r[i] == '9')){
			if(t-1 >= d-1){
				d--;
				t--;
				l[i] = '9';
				r[i] = '9';
			}
			else{
				flag = 1;
				break;
			}
		}
		else if(l[i] != r[i]){
			if(t-2 >= d-1){
				d--;
				t-=2;
				l[i] = '9';
				r[i] = '9';
			}
			else if(t-1 >= d-1){
				d--;
				t--;
				if(l[i]>r[i]) r[i] = l[i];
				else l[i] = r[i];
			}
			else{
				flag = 1;
				break;
			}
		}
	}
	if(flag == 1){
		cout << "-1";
		return 0;
	}
	reverse(r.begin(), r.end());
	if(n%2 != 0){
		if(t > 0) cout << l << "9" << r;
		else cout << l << s[n/2] << r;
	}
	else{
		cout << l << r;
	}
}