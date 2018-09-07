#include <iostream>

using namespace std;

struct node
{
    int data;
    node *lc;
    node *rc;
};

node *root = NULL, *temp = NULL;

node* get_new(int value){
    node *ptr = new node();
    ptr->data = value;
    ptr->lc = NULL;
    ptr->rc = NULL;
    return ptr;
}

node* bst_insert(node *top,int value){
    if(top == NULL){
        node *ptr = get_new(value);
        return ptr;
    }
    else{
        if(value < top->data)
            top->lc = bst_insert(top->lc,value);
        else if(top->data < value)
            top->rc = bst_insert(top->rc, value);
        else
            return top;
    }
    return top;
}

int maxheight(node* node) {
   if (node==NULL) 
       return -1;
   else{
       int lDepth = maxheight(node->lc);
       int rDepth = maxheight(node->rc);
       if (lDepth > rDepth) 
           return(lDepth+1);
       else 
        return(rDepth+1);
   }
}

int sum = 0;

void preorder(node *top){
    if(top != NULL){
        sum += maxheight(top);
        preorder(top->lc);
        preorder(top->rc);
    }
}

int main(){
    int value, n;
    cin >> n;
    while(n-- > 0){
        cin >> value;
        if(root == NULL)
        root = bst_insert(root, value);
        else
            bst_insert(root, value);
    }
    preorder(root);
    cout << maxheight(root) << "\n" << sum;
    return 0;
}
