#include<bits/stdc++.h>
using namespace std;


class BSTnode{
    public:
    int data;
    BSTnode* left;
    BSTnode* right;


    BSTnode(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};



BSTnode* helper(vector<int>&arr,int s,int e){
    if(s>e){
        return NULL;
    }
    if(s==e){
        return new BSTnode(arr[s]);
    }

    int mid=s+(e-s)/2;
    BSTnode* root=new BSTnode(arr[mid]);
    root->left=helper(arr,s,mid-1);
    root->right=helper(arr,mid+1,e);

    return root;
}

BSTnode* makeBST(vector<int>arr){
    if(arr.size()==0){
        return NULL;
    }
    return helper(arr,0,arr.size()-1);
}

void inorder(BSTnode* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);

}

int main(){
    vector<int>arr={1,2,3,4,5};

    BSTnode* root=makeBST(arr);

    inorder(root);

}