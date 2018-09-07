#include <bits/stdc++.h>

using namespace std;
int c1[27]={-1},c2[27]={-1},res[27],ctr=0;

int makingAnagrams(string s1, string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int n1=s1[s1.size()-1]-96,b1=s1[0]-96;
    int n2=s2[s2.size()-1]-96,b2=s2[0]-96;
    int ch=s1[0];
    for(int i=b1;i<=n1;i++){
    	for(int j=0;j<s1.size();j++){
			if(int(s1[j])==ch){
				while(s1[j]==ch){
    				c1[i]++;
    				j++;
    			}
			}
		}
		ch++;
	}
	ch=s2[0];
    for(int i=b2;i<=n2;i++){
    	for(int j=0;j<s2.size();j++){
			if(int(s2[j])==ch){
				while(s2[j]==ch){
    				c2[i]++;
    				j++;
    			}
			}
		}
		ch++;
	}
	int x,y;
	x=b1<b2?b1:b2;
	y=n1>n2?n1:n2;
	for(int i=x;i<=y;i++){
		res[i]=abs(c1[i]-c2[i]);
	}
	for(int i=x;i<=y;i++){
		ctr+=res[i];
	}
	return ctr;
}

int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int result = makingAnagrams(s1, s2);
    cout << result << endl;
    return 0;
}

