#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

void build_segtree(ll node, ll start, ll end,int v[],int tree[]){
	if(start==end)
		tree[node] = v[start]; 
	else{
		ll mid = (start + end)/2;
		build_segtree(2*node+1,start,mid,v,tree);
		build_segtree(2*node+2,mid+1,end,v,tree);
		tree[node] = min(tree[2*node+1],tree[2*node+2]); 
	}
}

void update(ll node, ll start, ll end,ll indx,ll val, int v[],int tree[]){
	if(start == end){
		v[indx] = val;
		tree[node] = val;
	}
	else{
		ll mid = (start+end)/2;
		if(indx >= start && indx <= mid)
			update(2*node+1,start, mid, indx, val, v, tree);
		else
			update(2*node+2, mid+1, end, indx, val, v, tree);
		tree[node] = min(tree[2*node+1],tree[2*node+2]);
	}
}

ll query(ll node,ll start,ll end, ll l,ll r,int tree[]){
	if(l > end || r < start)
		return INT_MAX;
	if(l <= start && r >= end){
		//cout << start << " " << end << "\n";
		return tree[node];
	}
	ll mid = (start + end)/2;
	ll x = query(2*node+1, start, mid, l, r, tree);
	ll y = query(2*node+2, mid+1, end, l, r, tree);
	//cout << x << " " << y << "\n";
	return min(x,y);
}

int main(){
	ll n,q,x,y;
	faster;
	char ch;
	int v[100005],tree[400005];;
	cin >> n >> q;
	for(int i=0; i<n; i++)
		cin >> v[i];
	build_segtree(0,0,n-1,v,tree);
	while(q--){
		cin >> ch >> x >> y;
		if(ch=='q')
			cout << query(0,0,n-1,x-1,y-1,tree) << "\n";
		else
			update(0,0,n-1,x-1,y,v,tree);
	}
	return 0;
}