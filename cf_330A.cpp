#include<bits/stdc++.h>

using namespace std;

bool chk(string s[], int n, int m,int x, int y){
	if(s[x][y]=='S')
		return true;
	int flag1=0, flag2=0;
	for(int j=0; j<y; j++)
		if(s[x][j]=='S')
			flag1=1;
	for(int j=y+1; j<m; j++)
		if(s[x][j]=='S')
			flag1=1;
	for(int i=0; i<x; i++)
		if(s[i][y]=='S')
			flag2=1;
	for(int i=x+1; i<n; i++)
		if(s[i][y]=='S')
			flag2=1;
	return (flag1&&flag2);

}

int main(){
	int n,m,ctr=0;
	cin >> n >> m;
	string s[n];
	set<int> st;
	for(int i=0; i<=n; i++)
		cin >> s[i];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(chk(s,n,m,i,j))
				ctr++;
		}
	}
	cout << n*m - ctr;
}