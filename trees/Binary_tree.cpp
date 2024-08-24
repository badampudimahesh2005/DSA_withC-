#include<bits/stdc++.h>
using namespace std;

class BTnode{
    public:
    int data;
    BTnode* left;
    BTnode* right;

    BTnode(int d): data(d),left(NULL),right(NULL){}
};


//not level wise

BTnode* make(){
    int n;
    cin>>n;

    if(n==-1)
    return NULL;

    BTnode* root=new BTnode(n);
    root->left=make();
    root->right=make();
    return root;
}

void print(BTnode* root){
    if(!root){
        return;
    }
    cout<<root->data<<"-";
    if(root->left)
    cout<<root->left->data<<",";
    if(root->right)
    cout<<root->right->data;
    cout<<endl;
    print(root->left);
    print(root->right);
    return;
}


//level wise
BTnode* make_level(){
    int n;
    cin>>n;

    if(n==-1){
        return NULL;
    }
 queue<BTnode*>q;
    BTnode* root= new BTnode(n);
    q.push(root);
    while(!q.empty()){
        BTnode* f=q.front();
        q.pop();

        int lc=-1;
        int rc=-1;
        cout<<"enter "<<f->data<<" left and right child : ";
        cin>>lc>>rc;
        if(lc != -1){
            f->left = new BTnode(lc);
            q.push(f->left);
        }
        if(rc != -1){
            f->right = new BTnode(rc);
            q.push(f->right);
        }
    }
    return root;
    }

void print_level(BTnode*root){
    if(!root)return;
    queue<BTnode*>q;
    q.push(root);
    while(!q.empty()){
        BTnode* f = q.front();
        q.pop();
        cout<<f->data<<"-";
        if(f->left){
            cout<<f->left->data<<",";
            q.push(f->left);
        }
        if(f->right){
            cout<<f->right->data;
            q.push(f->right);
        }
        cout<<endl;
    }
    return;
}
int main(){
    BTnode* root =make_level();
    print_level(root);

    return 0;
}