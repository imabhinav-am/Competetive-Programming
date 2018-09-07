#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
	int flag=1;
	string r(s);
	reverse(r.begin(),r.end());
	for(int i=0;i<s.size()-1;i++)
	{
		if(abs(s[i+1]-s[i])==abs(r[i+1]-r[i]))
		continue;
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	return "Funny";
	else
	return "Not Funny";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}
