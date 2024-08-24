#include<bits/stdc++.h>
using namespace std;


class BTnode{
    public:
    int data;
    BTnode* left;
    BTnode* right;

    BTnode(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};


BTnode* make_level(){
    int n;
    cin>>n;
    if(n==-1){
        return NULL;
    }
    queue<BTnode*>q;
    BTnode* root=new BTnode(n);
    q.push(root);

    while(!q.empty()){
        BTnode* f=q.front();
        q.pop();

        int lc=-1;
        int rc=-1;
        cout<<"enter the "<<f->data<<"left and right child: ";
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

// HEIGHT FUNCTION TO CHECK THE HEIGHT OF TREE

int height(BTnode*root){
    if(!root){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);

    return max(lh,rh)+1;
}

// CHECK THE TREE IS HEIGHT BALANCED TREE OR NOT 
bool isBalanced(BTnode* root){
    if(!root){
        return true;
    }
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }else{
        return false;
    }

}

// optimised
bool isBalanced_opt(BTnode* root,int* height){
    if(!root){
        return true;
    }
    int lh=0,rh=0;
    if(isBalanced_opt(root->left,&lh)==false){
        return false;
    }
    if(isBalanced_opt(root->right,&rh)==false){
        return false;
    }

    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    }else{
        return false;
    }
}

int main(){
    BTnode* root=make_level();
    print_level(root);

    // if(isBalanced(root)){
    //     cout<<"balanced tree"<<endl;

    // }else{
    //     cout<<"not balanced tree"<<endl;
    // }



int height=0;
    if(isBalanced_opt(root,&height)){
        cout<<"balanced tree"<<endl;

    }else{
        cout<<"not balanced tree"<<endl;
    }
    return 0;
}