#include<bits/stdc++.h>
using namespace std;


class BTnode{
    public:
    int data;
    BTnode* left;
    BTnode* right;

    BTnode(int val): data(val),left(NULL),right(NULL){}

};


BTnode* make_level(){
    int n;
    cin>>n;
    if(n==-1){
        return NULL;
    }
    BTnode* root=new BTnode(n);
    queue<BTnode*>q;
    q.push(root);

    while(!q.empty()){
        BTnode* f=q.front();
        q.pop();

        cout<<"enter the "<<f->data<<"left and right child: ";
        int lc=-1;
        int rc=-1;
        cin>>lc>>rc;

        if(lc!=-1){
            f->left=new BTnode(lc);
            q.push(f->left);
        }
         if(rc!=-1){
            f->right=new BTnode(rc);
            q.push(f->right);
        }
    }
    return root;
}

void print_level(BTnode* root){
    if(!root){
        return;
    }
    queue<BTnode*>q;
    q.push(root);

    while(!q.empty()){
        BTnode* f=q.front();
        q.pop();

        cout<<f->data<<"-";

        if(f->left){
            cout<<f->left->data<<",";
            q.push(f->left);
        }
         if(f->right){
            cout<<f->right->data<<",";
            q.push(f->right);
        }
        cout<<endl;
    }
    return;
}

// COUNT OF NODES 

int count(BTnode* root){
    if(!root){
        return 0;
    }
    return count(root->left)+count(root->right)+1;
}

// SUM OF ALL NODES

int sum(BTnode*root){
    if(!root){
        return 0;
    }
    return sum(root->left)+sum(root->right)+root->data;
}
int main(){
    BTnode* root=make_level();
    print_level(root);

    cout<<"no. of the nodes in the tree is: "<<count(root)<<endl;

    cout<<"sum of all nodes: "<<sum(root)<<endl;

    return 0;
}