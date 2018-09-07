/* 
	Author   : Abhinav
   
	Modified : 14-06-2018 05:44:05 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int row,col;
char grid[16][16],temp[16][16];

int maxplus(int x, int y){
	int d=1;
	while(x-d>=0 && x+d<row && grid[x+d][y] == 'G' && grid[x-d][y]=='G' &&
		  y-d>=0 && y+d<col && grid[x][y-d] == 'G' && grid[x][y+d]=='G')
		d++;
	return d-1;
}

void reset(){
	rep(i,0,row)
		rep(j,0,col)
			grid[i][j]=temp[i][j];
}

void foo(){
	int res=1;
	int res1,res2;
	rep(i,0,row){
		rep(j,0,col){
			reset();
			if(grid[i][j]=='G'){
				res1 = maxplus(i,j);
				while(res1>0){
					reset();
					rep(l,0,res1+1){
						grid[i+l][j]='B';
						grid[i-l][j]='B';
						grid[i][j-l]='B';
						grid[i][j+l]='B';
					}
					rep(p,0,row){
						rep(q,0,col){
							if(grid[p][q]=='G'){
								res2=maxplus(p,q);
								res = max(res,(4*(res1)+1)*(4*(res2)+1));
							}
						}
					}
					res1--;
				}
			}
		}
	}
	cout << res << "\n";
	//return res;
}

int main(){
	faster;
	cin >> row >> col;
	rep(i,0,row)
		rep(j,0,col){
			cin >> grid[i][j];
			temp[i][j]=grid[i][j];
		}
	foo();
	return 0;
}