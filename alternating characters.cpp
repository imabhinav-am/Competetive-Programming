#include <bits/stdc++.h>

using namespace std;
int ctr=0;

int alternatingCharacters(string s){
    for(int j=0;j<s.size();j++)
    {
		if(s[j+1]==s[j])
		{
    		s.erase(j,1);
    		ctr++;
    		j--;
    	}
	}
	return ctr;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        ctr=0;
        int result = alternatingCharacters(s);
        cout << result << endl;
    }
    return 0;
}

