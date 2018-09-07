/* 
	Author   : Abhinav
   
	Modified : 03-12-2017 05:42:09 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

int main(){
	char scr[21];
	int scrA=0,scrB=0,shots=0;
	while(scanf("%s",scr)!=EOF){
		scrA=0,scrB=0;
		//cin >> scr;
		shots = 0;
		int leftA=5,leftB=5;
		for (int i = 0; shots < 10; i++){
			if(i%2 == 0){
				if(scr[i] == '1'){
					scrA++;
					leftA--;
				}
				else
					leftA--;
				shots++;
				if(scrA > leftB + scrB || scrB > leftA + scrA)
					break;
			}
			else{
				if(scr[i] == '1'){
					scrB++;
					leftB--;
				}
				else
					leftB--;
				shots++;
				if(scrA > leftB + scrB || scrB > leftA + scrA)
					break;
			}
		}
		if(shots == 10 && scrA == scrB){
			for (int i = 10; shots < 20; i+=2){
				if(scr[i] == '1' && scr[i+1] == '0'){
					scrA++;
					shots+=2;
					break;
				}
				else if(scr[i+1] == '1' && scr[i] == '0'){
					scrB++;
					shots+=2;
					break;
				}
				else
					shots+=2;
			}
		}
		if(scrA == scrB && shots > 10)
			cout << "TIE" << "\n";
		else if(scrA > scrB)
			cout << "TEAM-A " << shots << "\n";
		else
			cout << "TEAM-B " << shots << "\n";
		cin.ignore();
	}
	return 0;
}