#include <bits/stdc++.h>

using namespace std;

string richieRich(string s, int n, int k){
    if(n == 1){
    	if(k>0)
    		return "9";
    	else 
    		return s;
	}
	int ch=1;
	int flag;
	int change[n]={0};
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			flag=1;
			if(k>0){
				if(s[i]>s[s.size()-1-i]){
					s[s.size()-i-1]=s[i];
					change[s.size()-i-1]=1;
				}
				else{
					s[i]=s[s.size()-i-1];
					change[i]=1;
				}
				k--;
			}
			else{
				ch=0;
			}
		}
		else
			flag=0;
	}
	if(flag==0){
		for(int i=0;i<n;i++){
			change[i]=1;
		}
	}
	if(ch==0){
		return "-1";
	}
	for(int i=0;i<s.size()/2 && k!=0;i++){
		if(s[i]!=9){
			if(change[i] || change[s.size()-i-1]){
				s[i]='9';
				s[s.size()-i-1]='9';
				k--;			
			}
		}
		else if(k>=2){
				s[i]='9';
				s[s.size()-i-1]='9';
				k-=2;
		}
	}
	if(n%2!=0 && k>0){
		s[n/2]='9';
		k--;
	}
	return s;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    string s;
    cin >> s;
    string result = richieRich(s, n, k);
    cout << result << endl;
    return 0;
}

