#include <bits/stdc++.h>

using namespace std;

int stringConstruction(string s) {
	int ch=97,ctr=0;
	int c[26]={0};
	sort(s.begin(),s.end());
    for(int i=0;i<26;i++){
    	for(int j=0;j<s.size();j++){
    		if(s[j]==ch){
    			c[i]++;
    			break;
			}
    	}
    	ch++;
	}
	for(int i=0;i<26;i++){
		if(c[i]>0)
		ctr++;
	}
	return ctr;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = stringConstruction(s);
        cout << result << endl;
    }
    return 0;
}

