/* 
	Author   : Abhinav
   
	Modified : 08-04-2018 02:57:24 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

//#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	//faster;
	int x,y,d;
	int a,t;
	cin >> t;
	while(t--){
		cin >> a;
		vector<vi> v(1000,vi(1000,0));
		//cout << "500 500\n";
		//cout << flush;
		if(a == 20){
			//cout << flush;
			cout << "500 500\n";
			cout << flush;
			cin >> x >> y;
			v[x][y]=1;
			int ctr=0;
			temp_a:
			for(int l=498; l<=502; l++){
				for(int m=498; m<=502; m++){
					if(v[l][m]==0){
						cout << l << " " << m << "\n";
						cout << flush;
						cin >> x >> y;
					}
					if(x==0 && y==0){
						ctr=20;
						break;
					}
					if(x==-1 && y==-1){
						exit(0);
					}
				}
				if(ctr == 20)
					break;
			}
			if(ctr==20){
				continue;
			}
			else
				goto temp_a;
		}
		else if(a == 200){
			cout << "500 500\n";
			cin >> x >> y;
			v[x][y]=1;
			int ctr=0;
			cout << flush;
			int d;
			temp_b:
			int l=493+d,m=493+d,e=507-d;
			for(; l<=e; l++){
				for(; m<=e; m++){
					if(v[l][m]==0){
						cout << l << " "<< m << "\n";
						cout << flush;
						cin >> x >> y;
					}
					if(x==0 && y==0){
						ctr=200;
						break;
					}
					if(x==-1 && y==-1){
						exit(0);
					}
				}
				if(ctr==200)
					break;
			}
			if(ctr==200)
				continue;
			else{
				d++;
				goto temp_b;
			}
		}
	}
	return 0;
}