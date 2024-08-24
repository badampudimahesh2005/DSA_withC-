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



void sumreplace(BTnode* root){
    if(!root){
        return;
    }
    sumreplace(root->left);
    sumreplace(root->right);

    if(root->left){
        root->data+=root->left->data;

    }
    if(root->right){
        root->data+=root->right->data;
    }
}


// maximum sumnode

BTnode* maxsumnode(BTnode* root){
    if(!root){
        return 0;
    }
    queue<BTnode*>q;
    q.push(root);
    int s=0;
    BTnode* node=NULL;
    while(!q.empty()){
        BTnode* f=q.front();
        q.pop();
        int sum=f->data;
        if(f->left){
            sum+=f->left->data;
            q.push(f->left);
        }
        if(f->right){
            sum+=f->right->data;
            q.push(f->right);
        }
        if(sum>=s){
            s=sum;
            node=f;
        }
    }
    return node;
}
int main(){

    BTnode* root=make_level();
    print_level(root);
    //sumreplace(root);
    //print_level(root);

    BTnode* root2=(root);
    cout<<root2->data;


    
    return 0;
}