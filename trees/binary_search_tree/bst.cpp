#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node* left;
    node* right;
};


node* newnode(int val){
    node* newnode=new node();
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
}


node* insert(node* root,int val){
    if(!root){
        return newnode(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
    
}

node* inordersuc(node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
node* deletenode(node* root,int key){
    if(!root){
        return root;
    }
    if(key<root->data){
        root->left=deletenode(root->left,key);
    }
    else if(key>root->data){
        root->right=deletenode(root->right,key);
    }else{

        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            free(root);
            return temp;
        }

        node* temp=inordersuc(root->right);

        root->data=temp->data;

        root->right=deletenode(root->right,temp->data);


    }
    return root;

}

int main(){

    return 0;
}