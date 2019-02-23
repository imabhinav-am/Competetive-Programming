/* 
	Author   : Abhinav
   
	Modified : Sunday 17 February 2019 10:25:05 PM IST

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;
typedef pair<int,int> PII;

#define faster  ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define PB push_back 
#define MP make_pair
# define INF 0x3f3f3f3f

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

string maxprefixfeq(string str, map<string,int> ms) { 
    int n = str.size(); 
  
    unordered_map<string, int> m; 
  
    for (int i = 0; i < n; i++) { 
        string s = ""; 
        for (int j = i; j < n; j++) { 
            s += str[j]; 
            //cout << s << "\n";
            if(ms[s])	m[s]++;
            else break; 
        } 
    } 
  
    int maxi = 0; 
  	string s; 
    for (auto i = m.begin(); i != m.end(); i++) { 
        if (i->second > maxi) { 
            maxi = i->second; 
            s = i->first; 
        } 
        else if (i->second == maxi) { 
            string ss = i->first; 
            if (ss.size() > s.size()) 
                s = ss; 
        } 
    } 
  	return s; 
} 

int main(){
	faster;
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		string s, st="";
		cin >> s;
		map<string,int> ms;
		rep(i,0,n){
			st += s[i];
			ms[st]=1;
			//cout << st << "\n";
		}
		string ans = maxprefixfeq(s,ms);
		cout << ans << "\n";
	}
	return 0;
}