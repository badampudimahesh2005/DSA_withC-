#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;

    node(int val){
        data= val;
        next=NULL;
    }
};


void insert(node* &head,int val){
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


void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<" NULL"<<endl;
}


void intersect(node* &head1,node* &head2,int pos){
    node* temp1=head1;
    pos--;

    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}



 int length(node* &head){
    node* temp=head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
 }

int intersection(node* &head1,node* &head2){

    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* ptr1;
    node* ptr2;

    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }else{
        ptr1=head2;
        ptr2=head1;

    }

    while(d)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;

    }
    return -1;

}

int main(){

    node* head=NULL;
    node* head2=NULL;

    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,2);
    insert(head,5);
    insert(head,6);
    insert(head2,9);
    insert(head2,8);
    intersect(head,head2,4);
    display(head);
    display(head2);

    cout<<intersection(head,head2);
    return 0;




}