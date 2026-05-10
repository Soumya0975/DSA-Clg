#include <iostream>
#include <map>
using namespace std;

map<int, pair<int,int>> tree;

void inorder(int r){
    if(r==-1) return;
    inorder(tree[r].first);
    cout << r << " ";
    inorder(tree[r].second);
}

void preorder(int r){
    if(r==-1) return;
    cout << r << " ";
    preorder(tree[r].first);
    preorder(tree[r].second);
}

void postorder(int r){
    if(r==-1) return;
    postorder(tree[r].first);
    postorder(tree[r].second);
    cout << r << " ";
}

int main(){
    int n, root, l, r;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> root >> l >> r;
        tree[root] = {l, r};
    }

    cin >> root;

    cout << "Inorder: ";
    inorder(root);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    return 0;
}

