#include <bits/stdc++.h>

using namespace std;

int minimumNumber(int n, string pass) {
    int ctr=0,flagU=0,flagN=0,flagL=0,flagS=0;
	for(int i=0; i<n; i++){
    	if(int(pass[i])>=65 && int(pass[i])<=90 && flagU == 0){
    		ctr++;
    		flagU = 1;
		}
		if(int(pass[i])>=97 && int(pass[i])<=122 && flagL == 0){
    		ctr++;
    		flagL = 1;
		}
		if(int(pass[i])>=48 && int(pass[i])<=57 && flagN == 0){
    		ctr++;
    		flagN = 1;
		}
		if((pass[i]=='!' || pass[i]=='@'||pass[i]=='#'||pass[i]=='$'||pass[i]=='%'||pass[i]=='^'
			||pass[i]=='&'||pass[i]=='*'||pass[i]=='('||pass[i]==')'||pass[i]=='-'||pass[i]=='+') && flagS == 0){
    		ctr++;
    		flagS = 1;
		}
		if(ctr == 4){
			break;
		}
	}
	if(n < 6){
		if((6-n) > 4 - ctr){
			return (6 - n);
		}
		else
			return (4 - ctr);
	}
	else 
		return (4-ctr);
}

int main() {
    int n;
    cin >> n;
    string password;
    cin >> password;
    int answer = minimumNumber(n, password);
    cout << answer << endl;
    return 0;
}

