#include <bits/stdc++.h>

using namespace std;

bool chk_pal(string s,int pos){
	string r(s);
	r.erase(pos,1);
	int x=0,y=r.size()-1;
	while(x<r.size()/2){
		if(r[x]!=r[y])
			return false;
		x++;
		y--;
	}
	return true;
}

int palindromeIndex(string s){
    for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--){
		if(s[i]!=s[j]){
			if(chk_pal(s,i))
				return i;
			else if(chk_pal(s,j))
				return j;	
		}
	}
	return -1;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = palindromeIndex(s);
        cout << result << endl;
    }
    return 0;
}

