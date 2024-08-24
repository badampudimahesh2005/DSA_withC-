#include<bits/stdc++.h>

using namespace std;


class node{
    public:
    int data;
    node* next;


    node(int val){
        data=val;
        next=NULL;

    }
};

void insertAtposition(node* &head,int pos,int val){
    node* n=new node(val);

    if(pos==1){
        n->next=head;
        head=n;
    }else{
        int count=1;

        node* temp=head;
        while(temp!=NULL && pos-1!=count){
            temp=temp->next;
            count++;
        }
        n->next=temp->next;
        temp->next=n;
    }
}

void insertAthead(node* &head,int val){
    

    node* n=new node(val);
    n->next=head;
    head=n;
}


void insert(node* &head, int val){
    node* n= new node(val);

    if(head==NULL){
        head=n;
        return;

    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* nex;

    while(curr!=NULL){
        nex=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nex;
    }
    return prev;
}

node* reverseKnodes(node* &head,int k){
    node* prev=NULL;
    node* cur=head;
    node* nex;

    int count=0;
    while(cur!=NULL && count<k){
        nex=cur->next;
        cur->next=prev;

        prev=cur;
        cur=nex;
        count++;
    }
    if(nex!=NULL){
        head->next=reverseKnodes(nex,k);

    }
    return prev;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}


int main(){

    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);

    display(head);

    insertAthead(head,5);
    display(head);

    insertAtposition(head,2,6);
    display(head);

// node* newhead=reverse(head);
// display(newhead);

node* newhead2=reverseKnodes(head,2);
display(newhead2);

}


