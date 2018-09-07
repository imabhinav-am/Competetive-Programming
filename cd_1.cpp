/* 
	Author   : Abhinav
   
	Modified : 28-03-2018 11:29:43 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

struct node{
	int data;
	node *lc;
	node *rc;
};

int ctr = 0;

void insert_node(node *top, int d, int k){
	if(top == NULL)
		return;
	if(top->data == d){
		//cout << "yes\n";
		if(top->lc == NULL){
			node *lptr = new node();
			lptr->data=k;
			lptr->lc = NULL;
			lptr->rc = NULL;
			top->lc = lptr;
		}
		else if(top->rc == NULL){
			node *rptr = new node();
			rptr->data=k;
			rptr->lc = NULL;
			rptr->rc = NULL;
			top->rc = rptr;
		}
	}
	insert_node(top->lc,d,k);
	insert_node(top->rc,d,k);
}

void preorder(node *top){
	if(top==NULL)
		return;
	//cout << top->data << " ";
	if(top->lc == NULL && top->rc == NULL)
		ctr++;
	preorder(top->lc);
	preorder(top->rc);
}

node* del(node *top, int x){
	if(top==NULL)
		return NULL;
	if(top->lc != NULL){
		//cout << top->lc->data << "\n";
		if(top->lc->data == x){
			//cout << "yes\n";
			//delete(top->lc);
			top->lc = NULL;
		}
	}
	if(top->rc != NULL){
		if(top->rc->data == x){
			//delete(top->rc);
			top->rc = NULL;
		}
	}
	del(top->lc,x);
	del(top->rc,x);
	return top;
}


int main(){
	faster;
	ll n,x;
	cin >> n;
	vi v(n);
	rep(i,0,n)
		cin >> v[i];
	cin >> x;
	if(x == 0){
		cout << "0";
		return 0;
	}
	node *start = new node();
	start->data = 0;
	start->lc = NULL;
	start->rc = NULL;
	for(int i=1; i<n; i++){
		insert_node(start, v[i], i);
	}
	start = del(start,x);
	//cout << start->data << "\n";
	preorder(start);
	cout << ctr;
	return 0;
}