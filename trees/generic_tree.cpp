#include<bits/stdc++.h>
using namespace std;

class GTNode{
public:
int data;
vector<GTNode*>child;

GTNode(int d): data(d){}
};

//not level wise

GTNode* make(){
    int val;
    cout<<"enter the root value: ";
    cin>>val;
    if(val==-1){
        return NULL;
    }
    GTNode* root = new GTNode(val);
    int n;
    cout<<"enter the no. of child it have: ";
    cin>>n;
    for(int i=0;i<n;i++){
        root->child.push_back(make());
    }
    return root;
}

void print(GTNode* root){
    cout<<root->data<<"->";
    for(int i=0;i<root->child.size();i++){
        cout<<root->child[i]->data<<",";
    }
    cout<<endl;

    for(int i=0;i<root->child.size();i++){
        print(root->child[i]);
    }
    return;
}

int main(){
    GTNode* root=make();
    print(root);
    return 0;
}