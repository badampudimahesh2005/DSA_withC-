#include<bits/stdc++.h>
using namespace std;


class BSTnode{
    public:
    int data;
    BSTnode* left;
    BSTnode* right;

    BSTnode(int val): data(val),left(NULL),right(NULL){}

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


void inorder(BSTnode* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


//search function

BSTnode* searchInBst(BSTnode* root,int key){
    if(!root){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data > key){
        return searchInBst(root->left,key);

    }
    return searchInBst(root->right,key);
}

//delete in BST

BSTnode* inordersuc(BSTnode* root){
    BSTnode* curr=root;
    while(curr && curr->left !=NULL){
        curr=curr->left;
    }
    return curr;
}

BSTnode*deleteinBSt(BSTnode* root,int k){

    if(k<root->data){
        root->left=deleteinBSt(root->left,k);
    }
    else if(k>root->data){
        root->right=deleteinBSt(root->right,k);
    }else{
        if(root->left==NULL){
            BSTnode* temp=root->right;
            free(root);
            return temp;
        }else if(root->right==NULL){
            BSTnode* temp=root->left;
            free(root);
            return temp;
        }
        BSTnode* temp=inordersuc(root->right);
        root->data=temp->data;
        root->right=deleteinBSt(root->right,temp->data);
    }
    return root;
}



int main(){
    BSTnode* root=NULL;
    // root=insertnode(root,4);
    // insertnode(root,2);
    // insertnode(root,5);
    // insertnode(root,1);
    // insertnode(root,3);
    // insertnode(root,6);


root = insertnode(root, 20);
    insertnode(root, 8);
    insertnode(root, 22);
    insertnode(root, 4);
    insertnode(root, 12);
    insertnode(root, 10);
    insertnode(root, 14);

    if(searchInBst(root,2)==NULL){
        cout<<"key is not in tree"<<endl;
    }else{
        cout<<"key is present in tree"<<endl;
    }
   

   inorder(root);
   cout<<endl;

   deleteinBSt(root,8);

   inorder(root);


    return 0;
}