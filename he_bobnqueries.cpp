/* 
	Author   : Abhinav
   
	Modified : 

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll countsetbits(ll n){
	ll ctr = 0;
	while(n){
		n &= (n-1);
		ctr++;	
	}
	return ctr;
}
 
void build_segtree(ll node, ll start, ll end, vi v, vi &tree){
	if(start == end)
		tree[node] = countsetbits(v[start]);
	else{
		ll mid = (start+end)/2;
		build_segtree(2*node+1,start,mid,v,tree);
		build_segtree(2*node+2,mid+1,end,v,tree);
		tree[node] = tree[2*node+1] + tree[2*node+2];
	}
}

void update_1(ll node, ll start, ll end, vi &v, vi &tree,ll indx,ll val){
	if(start==end){
		v[indx] = 2*v[indx] + 1;
		tree[node] = countsetbits(v[indx]); 
	}
	else{
		ll mid = (start+end)/2;
		if(idx>=start && indx<=mid)
			update_1(2*node+1,start,mid+1,v,tree,indx,val);
		else
			update_1(2*node+2,mid+1,end,v,tree,indx,val);
		tree[node] = tree[2*node+1] + tree[2*node+2];	
	}
}

void update_2(ll node, ll start, ll end, vi &v, vi &tree,ll indx,ll val){
	if(start==end){
		v[indx] = ceil((double)v[indx]/2);
		tree[node] = countsetbits(v[indx]); 
	}
	else{
		ll mid = (start+end)/2;
		if(idx>=start && indx<=mid)
			update_1(2*node+1,start,mid+1,v,tree,indx,val);
		else
			update_1(2*node+2,mid+1,end,v,tree,indx,val);
		tree[node] = tree[2*node+1] + tree[2*node+2];	
	}
}

ll query(ll node,ll start, ll end,ll l,ll r,vi tree){
	if(l>end || r<start)
		return 0;
	if(start>=l && end<=r)
		return tree[node];
	ll mid = (start+end)/2;
	ll q1 = query(node,start,mid,l,r,tree);
	ll q2 = query(node,mid+1,end,l,r,tree);
	return (q1+q2);
}

int main(){
	faster;
	ll n,q,x,y,ch;
	cin >> n >> q;
	vi v(500005,0), tree(2000005,0);
	build_segtree(0,0,n-1,v,tree);
	while(q--){
		cin >> ch;
		if(ch==1){
			
		}
		else if(ch==2){

		}
		else{

		}
	}
	return 0;
}