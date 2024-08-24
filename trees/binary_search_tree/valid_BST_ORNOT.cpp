#include<bits/stdc++.h>
using namespace std;


class BSTnode{
    public:
    int data;
    BSTnode* left;
    BSTnode* right;

    BSTnode(int val){
        data=val;
        left=NULL;
        right=NULL;
        }

};







BSTnode* insertnode(BSTnode *root,int d){
    if(!root){
        return new BSTnode(d);
    }

    if(d < root->data ){
        root->left=insertnode(root->left,d);
    }else{
        root->right=insertnode(root->right,d);
    }

    return root;
}


bool helper(BSTnode*root,int min,int max){
    if(!root){
        return 1;
    }
    if(root->data <min || root->data >max){
        return 0;
    }
    bool ls=helper(root->left,min,root->data);
    bool rs=helper(root->right,root->data,max);

    return ls && rs;
}



bool validbst(BSTnode*root){
    if(!root){
        return 1;
    }
    return helper(root,INT_MIN,INT_MAX);
}

int main(){
    BSTnode* root=NULL;
    root=insertnode(root,5);
    insertnode(root,1);
    insertnode(root,3);
    insertnode(root,4);
    insertnode(root,2);
    insertnode(root,7);

    cout<<validbst(root);
    cout<<endl;


    return 0;
}