/* 
	Author   : Abhinav
   
	Modified : 17-12-2017 02:46:50 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

vi pr;

void SieveOfEratosthenes(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++){
        if (prime[p] == true){
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
       if (prime[p])
          pr.emplace_back(p);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	SieveOfEratosthenes(1000000);
	ll n,q,i,top;
	cin >> n >> q;
	vi v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	i = 0;
	while(q-- > 0){
		reverse(v.begin(), v.end());
		top = v.size()-1;
		while(top >= 0){
			if(v[top] % pr[i] == 0){
				cout << v[top] << "\n";
				v.erase(v.begin()+top);
			}
			top--;
		}
		i++;
	}
	if(v.size()!=0){
		reverse(v.begin(), v.end());
		for(int i=0; i<v.size(); i++)
			cout << v[i] << "\n";
	}
	return 0;
}