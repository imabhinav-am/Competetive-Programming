#include <bits/stdc++.h>

using namespace std;

int theLoveLetterMystery(string s){
	int ctr=0;
    for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--){
    	ctr+=(abs(s[i]-s[j]));
	}
	return ctr;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = theLoveLetterMystery(s);
        cout << result << endl;
    }
    return 0;
}

