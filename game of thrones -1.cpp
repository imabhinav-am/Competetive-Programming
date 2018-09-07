#include <bits/stdc++.h>

using namespace std;
int c[27]={-1};

string gameOfThrones(string s){
    sort(s.begin(),s.end());
    int ctr_e=0,ctr_o=0;
	int n=s[s.size()-1]-96,b=s[0]-96;
	int ch=s[0];
    for(int i=b;i<=n;i++){
    	for(int j=0;j<s.size();j++){
			if(int(s[j])==ch){
				while(s[j]==ch){
    				c[i]++;
    				j++;
    			}
			}
		}
		ch++;
	}
	for(int x=b;x<=n;x++){
		if(c[x]!=-1){
			if(c[x]%2==0)
				ctr_e++;
			else
				ctr_o++;
		}
	}
	if(ctr_e>0 && (ctr_o==1 || ctr_o==0))
	return "YES";
	else 
	return "NO";
}

int main() {
    string s;
    cin >> s;
    string result = gameOfThrones(s);
    cout << result << endl;
    return 0;
}

