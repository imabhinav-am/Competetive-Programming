#include <bits/stdc++.h>

using namespace std;

string isValid(string s){
    int ch=97,ctr=0;
	int c[26]={0};
	sort(s.begin(),s.end());
    for(int i=0;i<26;i++){
    	for(int j=0;j<s.size();j++){
    		if(s[j]==ch){
    			c[i]++;
			}
    	}
    	ch++;
	}
	for(int i=0;i<25;i++){
		if(c[i]!=0 && c[i+1]!=0){
			if(c[i]!=c[i+1] || c[i+2]!=c[i] && c[i+2]!=0){
				ctr++;
				if(c[i+3]==0){
					if(abs(c[i]-c[i+2])==1)
						return "YES";
					else
						return "NO";
				}
				else if(abs(c[i]-c[i+1])!=1)
					return "NO";
			}
		}
		if(ctr>1){
			return "NO";
		}
	}
	return "YES";
}

int main() {
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << endl;
    return 0;
}

