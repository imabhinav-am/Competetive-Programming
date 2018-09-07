/* 
	Author   : Abhinav
   
	Modified : 22-06-2018 03:58:30 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

ll node=0;

int farthest_distance(vi arr,int l,vector<list<pair<int,int>>> &v,int k=0){
	ll d=0,n=arr.size(),max_d=0,j=0,ld,lnode=0,mnode=0;
	if(l>1){
		for(int i=l-1; i<n; i++){
			ld=0;
			lnode=-1;
			for(auto it=v[i].begin(); it!=v[i].end(); it++){
				ld += it->second;
				lnode = it->first;
			}
			if(lnode!=-1 && d+ld==max_d && lnode>mnode){
				max_d = d+ld;
				j = i;
				mnode = lnode;
			}
			if(d+ld>max_d){
				max_d = d+ld;
				j = i;
				mnode = lnode;
			}
			d += arr[i];
			//cout << max_d << "\n";
			//cout <<"j " <<  j << "\n";	
		}
		if(l==2){
			if(d>max_d){
				max_d = d;
				j = n-1;
			}
		}
		for(int i=0; i<l-2; i++){
			ld=0;
			lnode=-1;
			for(auto it=v[i].begin(); it!=v[i].end(); it++){
				ld += it->second;
				lnode = it->first;
			}
			if(lnode!=-1 && d+ld==max_d && lnode>mnode){
				max_d = d+ld;
				j = i;
				mnode = lnode;
			}
			if(d+ld>max_d){
				max_d = d+ld;
				j = i;
				mnode = lnode;
			}
			d += arr[i];
			//cout << d << "\n";
		}
	}
	else{
		for(int i=l-1; i<n-1; i++){
			ld=0;
			lnode=-1;
			for(auto it=v[i].begin(); it!=v[i].end(); it++){
				ld += it->second;
				lnode = it->first;
			}
			if(lnode!=-1 && d+ld==max_d && lnode>mnode){
				max_d = d+ld;
				j = i;
				mnode = lnode;
			}
			if(d+ld>max_d){
				max_d = d+ld;
				j = i;
				mnode = lnode;
			}
			d += arr[i];	
			//cout << j << "\n";
		}	
	}
	if(k==1)
		cout << max_d << "\n";
	if(k==-1){
		if(l<1)
			j++;
		for(auto it=v[j].begin(); it!=v[j].end(); it++)
			if(it->first==mnode)
				it = v[j].erase(it);
	}
	if(l>1)
		return j;
	else
		return j+1;
}

int main(){
	ll n,w,q,ch,x,fnode;
	cin >> n;
	node=n;
	vector<list<pair<int,int>>> v(n);
	vi arr(n);
	rep(i,0,n){
		cin >> w;
		arr[i]=w;
	}
	cin >> q;
	while(q--){
		cin >> ch >> x;
		if(ch==1){
			cin >> w;
			fnode = farthest_distance(arr,x,v);
			//cout << fnode << "\n";
			node++;
			v[fnode].emplace_back(make_pair(node,w));
			//cout << farthest_distance(arr,1,v);
			//for(int i=0; i<n; i++)
			//	for(auto it=v[i].begin(); it!=v[i].end(); it++)
			//		cout << i << " " <<it->first << " " << it->second << "\n";
		}
		else if(ch==2){
			cin >> w;
			node++;
			v[x-1].emplace_back(make_pair(node,w));
		}
		else if(ch==3){
			farthest_distance(arr,x,v,-1);
		}
		else{
			farthest_distance(arr,x,v,1);
		}
	}
	return 0;
}