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
    BTnode* root=new BTnode(n);
    queue<BTnode*>q;
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




// ITERATIVE

int height(BTnode* root){
    if(!root){
        return 0;
    }
    queue<BTnode*>q;
    q.push(root);
int c=0;
    while (!q.empty())
    {
        int s=q.size();
        for(int i=0;i<s;i++){
            BTnode* f=q.front();
            q.pop();
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
        c++;
    }
    return c;
}

//RECURSIVE

int height_recur(BTnode* root){
    if(!root){
        return 0;
    }
    int lh=height_recur(root->left);
    int rh=height_recur(root->right);

    return max(lh,rh)+1;
}



// DIAMETER OF BT

int caldia(BTnode* root){
    if(!root){
        return 0;
    }
    int lh=height_recur(root->left);
    int rh=height_recur(root->right);

    int curdia=lh+rh+1;

    int leftdia=caldia(root->left);
    int rightdia=caldia(root->right);

    return max(curdia,max(leftdia,rightdia));
}



int main(){

    BTnode* root=make_level();
    print_level(root);

    cout<<"height of the given binary tree is: "<<height(root)<<endl;

    cout<<"max diameter of the binary tree is: "<<caldia(root);
    return 0;
}