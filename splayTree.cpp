LAB 3 SPLAY TREE
#include <iostream>
using namespace std;

struct Node{
    int key;
    Node *l,*r;
};

// rotation
Node* rotR(Node* x){
    Node* y = x->l;
    x->l = y->r;
    y->r = x;
    return y;
}
Node* rotL(Node* x){
    Node* y = x->r;
    x->r = y->l;
    y->l = x;
    return y;
}

// splay (only basic idea)
Node* splay(Node* root,int k){
    if(!root || root->key==k) return root;

    if(k < root->key){
        if(!root->l) return root;
        root->l->l = splay(root->l->l,k);
        root = rotR(root);
    }
    else{
        if(!root->r) return root;
        root->r->r = splay(root->r->r,k);
        root = rotL(root);
    }
    return root;
}

// insert
Node* insert(Node* root,int k){
    if(!root) return new Node{k,NULL,NULL};
    root = splay(root,k);

    Node* n = new Node{k,NULL,NULL};
    if(k < root->key){
        n->r = root;
    } else {
        n->l = root;


    }
    return n;
}

void inorder(Node* r){
    if(r){
        inorder(r->l);
        cout<<r->key<<" ";
        inorder(r->r);
    }
}

int main(){
    Node* root=NULL;
    root=insert(root,10);
    root=insert(root,20);
    inorder(root);
}
