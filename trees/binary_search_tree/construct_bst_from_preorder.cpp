#include<bits/stdc++.h>
using namespace std;

struct BSTnode{
    int data;
    BSTnode* left;
    BSTnode* right;

    BSTnode(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

BSTnode* construct(int preorder[],int* preorderidx,int key,int min,int max,int n){

if(*preorderidx >=n){
    return NULL;
}
    BSTnode* root=NULL;
    if(key>min && key<max){
        root=new BSTnode(key);
        (*preorderidx)++;

        if(*preorderidx<n){
            root->left=construct(preorder,preorderidx,preorder[*preorderidx],min,key,n);
        }
        
        if(*preorderidx<n){
            root->right=construct(preorder,preorderidx,preorder[*preorderidx],key,max,n);
        }
    }
    return root;

}

void printpreorder(BSTnode* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

int main(){

    int preorder[]={7,5,4,6,8,9};
    int n=6;
    int preorderidx=0;
    BSTnode* root=construct(preorder,&preorderidx,preorder[0],INT_MIN,INT_MAX,n);
    
    printpreorder(root);
}