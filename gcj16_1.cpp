/* 
	Author   : Abhinav
   
	Modified : 27-02-2018 02:24:31 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll t,n,c=0;
	string ctr(10,'1');
	cin >> t;
	while(t--){
		cin >> n;
		c++;
		string str(10,'0');
		ll flag = 1,i=1,temp,d;
		if(n == 0){
			cout << "Case #" << c << ": " << "INSOMNIA\n";
			continue;
		}
		while(flag){
			temp = i*n;
			while(temp){
				d = temp%10;
				temp /= 10;
				if(str[d] == '0'){
					str[d]++;
				}
				//cout << str << " " << ctr << "\n";
				if(str == ctr){
					flag = 0;
					break;
				}
			}
			i++;
		}
		cout << "Case #" << c << ": " <<(i-1)*n << "\n";
	}
	return 0;
}