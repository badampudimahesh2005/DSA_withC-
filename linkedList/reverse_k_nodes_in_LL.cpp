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


void insert(node* &head,int val){
    node* n=new node(val);

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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"null"<<endl;
}


//time complexcity is O(n)

node* reverseKNodes(node* head,int k){
    node* prevptr=NULL;
    node* curptr=head;
    node* nextptr;
int count=0;
    while(curptr!=NULL && count<k ){
        nextptr=curptr->next;
        curptr->next=prevptr;

        prevptr=curptr;
        curptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next=reverseKNodes(nextptr,k);
    }
    return prevptr;
}


int main(){

    node* head=NULL;

    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);

display(head);
int k=2;

node* newhead =reverseKNodes(head,k);
display(newhead);
}