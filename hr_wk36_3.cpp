/* 
	Author   : Abhinav
   
	Modified : 10-02-2018 03:34:07 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)
#define forv(i,j,k) for(ll i=j; i>k; i--)

int check = 0, mv = 0;

void fill_left(vector<string> p, int m, int n){
	int i = m, j =n;
	while(n>0){
		n--;
		if(p[m][n] == 'K' && (p[i][j] == 'r' || p[i][j] == 'q')){
			mv = 1;
			break;
		}
		if(p[m][n] == 'k'){
			check = 1;
			return;
		}
		if(p[m][n] == '#')
			continue;
		else
			break;	
	}
}

void fill_right(vector<string> p, int m, int n){
	int i = m, j =n;
	while(n<7){
		n++;
		if(p[m][n] == 'K' && (p[i][j] == 'r' || p[i][j] == 'q')){
			mv = 1;
			break;
		}
		if(p[m][n] == 'k'){
			check = 1;
			return;
		}
		if(p[m][n] != '#')
			break;	
	}
}

void fill_down(vector<string> p, int m, int n){
	int i = m, j=n;
	while(m>0){
		m--;
		if(p[m][n] == 'K' && (p[i][j] == 'r' || p[i][j] == 'q')){
			mv = 1;
			break;
		}
		if(p[m][n] == 'k'){
			check = 1;
			return;
		}
		if(p[m][n] == '#')
			continue;
		else
			break;	
	}
}

void fill_up(vector<string> p, int m, int n){
	int i = m, j = n;
	while(m<7){
		m++;
		if(p[m][n] == 'K' && (p[i][j] == 'r' || p[i][j] == 'q')){
			mv = 1;
			break;
		}
		if(p[m][n] == 'k'){
			check = 1;
			return;
		}
		if(p[m][n] == '#')
			p[m][n] = '0';
		else
			break;	
	}
}

void fill_knight(vector<string> p, int m, int n){
	int i = m-2;
	int j = n-1;
	if(i>=0 && j>=0){
		if(p[i][j] == 'K' && p[m][n] == 'n'){
			mv = 1;
			return;
		}
		if(p[i][j] == 'k'){
			check = 1;
			return;
		}
	}
	i = m-2;
	j = n+1;
	if(i>=0 && j<7){
		if(p[i][j] == 'K' && p[m][n] == 'n'){
			mv = 1;
			return;
		}
		if(p[i][j] == 'k'){
			check = 1;
			return;
		}
	}
	i = m+2;
	j = n-1;
	if(i<7 && j>=0){
		if(p[i][j] == 'K' && p[m][n] == 'n'){
			mv = 1;
			return;
		}
		if(p[i][j] == 'k'){
			check = 1;
			return;
		}
	}
	i = m+2;
	j = n+1;
	if(i<7 && j<7){
		if(p[i][j] == 'K' && p[m][n] == 'n'){
			mv = 1;
			return;
		}
		if(p[i][j] == 'k'){
			check = 1;
			return;
		}
	}
	i = m-1;
	j = n-2;
	if(i>=0 && j >= 0){
		if(p[i][j] == 'K' && p[m][n] == 'n'){
			mv = 1;
			return;
		}
		if(p[i][j] == 'k'){
			check = 1;
			return;
		}
	}
	i = m+1;
	j = n-2;
	if(i<7 && j >= 0){
		if(p[i][j] == 'K' && p[m][n] == 'n'){
			mv = 1;
			return;
		}
		if(p[i][j] == 'k'){
			check = 1;
			return;
		}
	}
	i = m+1;
	j = n+2;
	if(i<7 && j < 7){
		if(p[i][j] == 'K' && p[m][n] == 'n'){
			mv = 1;
			return;
		}
		if(p[i][j] == 'k'){
			check = 1;
			return;
		}
	}
	i = m-1;
	j = n+2;
	if(i >=0 && j <7){
		if(p[i][j] == 'K' && p[m][n] == 'n'){
			mv = 1;
			return;
		}
		if(p[i][j] == 'k'){
			check = 1;
			return;
		}
	}
}

void fill_diag(vector<string> p, int i, int j){
	int m = i, n = j;
	//right up
	while(m>0 && n<7){
		m--;
		n++;
		if(p[m][n] == 'K' && (p[i][j] == 'b' || p[i][j] == 'q')){
			mv = 1;
			return;
		}
		if(p[m][n] == 'k'){
			check = 1;
			return;
		}
		if(p[m][n] == '#')
			continue;
		else
			break;	
	}
	m = i;
	n = j;
	//right down
	while(m<7 && n<7){
		m++;
		n++;
		if(p[m][n] == 'K' && (p[i][j] == 'b' || p[i][j] == 'q')){
			mv = 1;
			return;
		}
		if(p[m][n] == 'k'){
			check = 1;
			return;
		}
		if(p[m][n] == '#')
			continue;
		else
			break;	
	}	
	m = i;
	n = j;
	//left up
	while(m>0 && n>0){
		m--;
		n--;
		if(p[m][n] == 'K' && (p[i][j] == 'b' || p[i][j] == 'q')){
			mv = 1;
			return;
		}
		if(p[m][n] == 'k'){
			check = 1;
			return;
		}
		if(p[m][n] == '#')
			continue;
		else
			break;	
	}
	m = i;
	n = j;
	//left down
	while(m<7 && n>0){
		m++;
		n--;
		if(p[m][n] == 'K' && (p[i][j] == 'b' || p[i][j] == 'q')){
			mv = 1;
			return;
		}
		if(p[m][n] == 'k'){
			check = 1;
			return;
		}
		if(p[m][n] == '#')
			continue;
		else
			break;	
	}
}

int main(){
	faster;
	int t,k_x,k_y,P_y,ans;
	cin >> t;
	while(t--){
		vector<string> s(8);
		for(i,0,8){
			cin >> s[i];
			for(j,0,8){
				if(s[i][j] == 'k'){
					k_x = i;
					k_y = j;
				}
			}
		}
		ans = 0;
		check = 0;
		ll res = 0;
		for(x,0,8){
			if(s[1][x] == 'P'){
				check = 0;
				ans = 0;
				mv = 0;
				vector<string> p = s;
				p[1][x] = '#';
				for(i,0,8){
					for(j,0,8){
						//for Rook
						if(p[i][j] == 'R' || p[i][j] == 'r'){
							fill_up(p,i,j);
							fill_down(p,i,j);
							fill_left(p,i,j);
							fill_right(p,i,j);
						}//for Bishop
						else if(p[i][j] == 'B' || p[i][j] == 'b'){
							fill_diag(p,i,j);
						}//for Queen
						else if(p[i][j] == 'Q' || p[i][j] == 'q'){
							fill_up(p,i,j);
							fill_down(p,i,j);
							fill_left(p,i,j);
							fill_right(p,i,j);
							fill_diag(p,i,j);	
						}
						else if(p[i][j] == 'N' || p[i][j] == 'n'){
							fill_knight(p,i,j);
						}
						if(mv == 1)
							break;
					}
					if(mv == 1)
						break;
				}
				if(check == 1 && mv == 0){
					res += 4;
				}
				else if(mv == 0){
					check = 0;
					fill_up(p,0,x);
					fill_down(p,0,x);
					fill_left(p,0,x);
					fill_right(p,0,x);
					if(check == 1)
						ans++;
					check = 0;
					fill_diag(p,0,x);
					if(check == 1)
						ans++;
					check = 0;
					fill_up(p,0,x);
					fill_down(p,0,x);
					fill_left(p,0,x);
					fill_right(p,0,x);
					fill_diag(p,0,x);
					if(check == 1)
						ans++;
					check = 0;
					fill_knight(p,0,x);
					if(check == 1)
						ans++;
					if(ans!=0){
					res += ans;
					ans = 0;
					}
				}
			}
		}
		cout << res << "\n";
	}
	return 0;
}