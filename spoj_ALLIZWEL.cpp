/* 
	Author   : Abhinav
   
	Modified : 26-08-2018 06:19:22 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
#define make_pair mp

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)
#define inrng(x,y,r,c) (x>=0 && x<r && y>=0 && y<c)

string s[101], pt="ALLIZZWELL";
bool visited[101][101], flag;

void init_visited(ll r, ll c){
	rep(i,0,r)
		rep(j,0,c)
			visited[i][j]=false;
}

void findpt(ll x,ll y,ll r,ll c,ll idx){
	if(idx==9){
		flag = true;
		return;
	}
	visited[x][y] = true;
	/*rep(i,0,r){
		rep(j,0,c)
			cout << visited[i][j] << " ";
		cout << "\n";
	}*/
	int a[]={0,0,-1,1,-1,-1,1,1},b[]={1,-1,0,0,1,-1,1,-1};
	for(int i=0; i<8 && !flag;i++){
		ll p = x + a[i];
		ll q = y + b[i];
		//cout << p << " " << q << "\n";
		//cout << inrng(p,q,r,c) << "\n";
		if(inrng(p,q,r,c) && !visited[p][q] && s[p][q]==pt[idx+1])
			findpt(p,q,r,c,idx+1);
	}
	visited[x][y] = false;
}

int main(){
	faster;
	ll n,m,t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		rep(i,0,n)
			cin >> s[i];
		init_visited(n,m);
		flag = false;
		rep(i,0,n){
			rep(j,0,m){
				if(s[i][j]=='A'){
					findpt(i,j,n,m,0);
					if(flag)
						break;
				}
			}
			if(flag)
				break;
		}
		flag?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}