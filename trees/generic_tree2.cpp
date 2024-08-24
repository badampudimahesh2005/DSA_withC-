#include<bits/stdc++.h>
using namespace std;



class Gtnode{
    public:
    int data;
    vector<Gtnode*>child;

    Gtnode(int d): data(d){}
};

Gtnode* make(){

    queue<Gtnode*>q;

    int val;
    cout<<"enter the root value : ";
    cin>>val;
    if(val==-1){
        return NULL;
    }
    Gtnode*root=new Gtnode(val);
    q.push(root);
    while(!q.empty()){
        Gtnode* f=q.front();
        q.pop();
        cout<<"enter the no. child "<<f->data<<" have: ";
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int cv;
            cout<<"enter the child value: ";
            cin>>cv;
            Gtnode* cp=new Gtnode(cv);
            q.push(cp);
            f->child.push_back(cp);

        }
    }return root;
}

void print(Gtnode* root){
    queue<Gtnode*>q;
    q.push(root);
    while(!q.empty()){
        Gtnode* f= q.front();
        q.pop();

        cout<<f->data<<"-";
        for(int i=0;i<f->child.size();i++){
            cout<<f->child[i]->data<<",";
            q.push(f->child[i]);
        }
    }
    return;
}

int main(){
    Gtnode* root=make();
    print(root);

    return 0;
}

