/* 
	Author   : Abhinav
   
	Modified : 27-08-2018 02:43:33 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;
typedef pair<int,int> PII;

#define faster  ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define PB push_back 
#define MP make_pair
# define INF 0x3f3f3f3f

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	string s;
	cin >> s;
	ll sz = s.size();
	vi v[10];
	rep(i,0,sz)
		v[s[i]-'0'].PB(i);
	vi d(100005);
	vector<bool> vis(100005);
	d[0]=0;
	vis[0]=true;
	queue<ll> q;
	q.push(0);
	while(!q.empty()){
		ll idx = q.front();
		q.pop();
		if(idx==sz-1)
			break;
		ll val = s[idx]-'0';
		ll vsz = v[val].size();
		rep(j,0,vsz){
			ll tp=v[val][j];
			if(!vis[tp]){
				vis[tp]=true;
				q.push(tp);
				d[tp] = d[idx]+1;
			}
		}
		v[val].clear();
		if(idx-1>=0 && !vis[idx-1]){
			vis[idx-1] = true;
			q.push(idx-1);
			d[idx-1] = d[idx]+1;
		}
		if(idx+1<sz && !vis[idx+1]){
			vis[idx+1] = true;
			q.push(idx+1);
			d[idx+1] = d[idx]+1;
		}
	}
	cout << d[sz-1];
	return 0;
}