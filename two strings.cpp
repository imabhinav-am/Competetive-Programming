#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2)
{
   	string letters = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<26;i++)
    {
    	if(s1.find(letters[i])!=string::npos && s2.find(letters[i])!=string::npos)
    	return "YES";
	}
	return "NO";
}

int main() 
{
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++)
    {
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }
    return 0;
}

