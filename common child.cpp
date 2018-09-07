#include <bits/stdc++.h>

using namespace std;

int commonChild(string s1, string s2){
	int first[26]={0},second[26]={0};
	int ctr=0;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	for(int i=0;i<26;i++){
		for(int j=0;j<s1.size();j++){
			if(s1[j]-'A'==i){
				first[i]++;
			}
		}
	}
	for(int i=0;i<26;i++){
		for(int j=0;j<s2.size();j++){
			if(s2[j]-'A'==i){
				second[i]++;
			}
		}
	}
	for(int i=0;i<26;i++){
		if(first[i]>0 && second[i]>0)
			ctr+=min(first[i],second[i]);
	}
	return ctr;
}

int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int result = commonChild(s1, s2);
    cout << result << endl;
    return 0;
}

