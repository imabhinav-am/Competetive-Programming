/* 
	Author   : Abhinav
   
	Modified : 15-12-2017 11:56:13 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;


void subString(string s, int n) {
	string temp,t;
	ll len = s.size()/2;
	string res = s.substr(0, len); 
    for (int i = 1; i < n-len; i++){
        temp = s.substr(i, len);
        reverse(temp.begin(), temp.end());
        if(s.find(temp)!= string::npos){
        	reverse(temp.begin(), temp.end());
       		t = temp;
       		sort(t.begin(),t.end());
       		int flag = 0;
        	do{
    			if(s.find(t) != string::npos){
    				flag = 1;
    				break;
    			}
        	}while(next_permutation(t.begin(), t.end()));
        	if(flag == 1){
        		if(temp < res)
        			res = temp;
        	}
        }
    }
    cout << res;
}

int main() 
{
    string s;
    cin >> s;
    subString(s,s.length());
    return 0;
}