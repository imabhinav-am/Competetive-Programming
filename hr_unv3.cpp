/* 
	Author   : Abhinav
   
	Modified : 25-02-2018 12:49:00 AM

*/ 

#include <bits/stdc++.h>

using namespace std;
 
typedef long long ll; 

void search(string p, string t, map<string,ll> &m){
    ll M = p.size(), N = t.size();
    string countpat(26,'0'), counttext(26,'0');
    for (ll i = 0; i < M; i++){
        (countpat[p[i] - 'a'])++;
        (counttext[t[i] - 'a'])++;
    }
 
    for (ll i = M; i < N; i++){
        if (countpat == counttext){
        	string temp = t.substr(i-M,M);
        	//string temp = " ";
        	m[temp]++;
        }
 
        (counttext[t[i]-'a'])++;
 		counttext[t[i-M]-'a']--;
    }
 
    if (countpat == counttext && N-M >=0){
    	string temp = t.substr(N-M,M);
    	//string temp = " ";
       	m[temp]++;
    }
}
 
int main(){
    string t;
    string p;
    ll n;
    cin >> n;
    while(n--){
    	cin >> p >> t;
    	if(t.size() < p.size()){
    		cout << "-1\n";
    		continue;
    	}
    	map<string,ll> m;
    	search(p, t, m);
    	if(m.size()>0){
    		ll ans = 0;
    		string res;
    		map <string, ll> :: iterator itr;
	    	for (itr = m.begin(); itr != m.end(); ++itr){  
	    		if(itr->second > ans){
	    			ans = itr->second;
	    			res = itr->first;
	    		}
	    		//cout << l << "\n";
		    }
		    cout << res << "\n";
	    }
	    else
	    	cout << "-1\n";
    }
    return 0;
}