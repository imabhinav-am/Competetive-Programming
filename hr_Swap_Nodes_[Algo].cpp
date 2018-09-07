/* 
	Author   : Abhinav
   
	Modified : 12-12-2017 07:01:57 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

struct node{
	int data;
	int depth;
	node *lc;
	node *rc;
};
node *root = new node();

int ctr=0,t;

void create_tree(node* top){
	int ch1,ch2;
	queue <node*> q;
	q.push(top);
	node *temp = q.front();
	while(ctr < t){
		ctr++;
		cin >> ch1 >> ch2;
		if(ch1 == -1)
			temp->lc = NULL;
		else{
				node *lcptr = new node();
				lcptr->data = ch1;
				lcptr->depth = (temp->depth)+1;
				temp->lc = lcptr;
				q.push(temp->lc);
			}
		if(ch2 == -1)
			temp->rc = NULL;
		else{
				node *rcptr = new node();
				rcptr->data = ch2;
				rcptr->depth = (temp->depth)+1; 
				temp->rc = rcptr;
				q.push(temp->rc);
		}
		q.pop();
		temp = q.front();
	}
}	

void inorder(node *top){
	if(top){
		inorder(top->lc);
		cout << top->data << " ";
		inorder(top->rc);
	}
}

void swap(node *top, int d){
	if(top){
		if(top->depth%d == 0){
			node *t = top->lc;
			top->lc = top->rc;
			top->rc = t;
		}
		swap(top->lc,d);
		swap(top->rc,d);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a,b;
	cin >> t;
	root->data = 1;
	root->depth = 1;
	root->lc = NULL;
	root->rc = NULL;
	create_tree(root);
	int T,d;
	cin >> T;
	while(T-- > 0){
		cin >> d;
		swap(root,d);
		inorder(root);
		cout << "\n";
	}
	return 0;
}