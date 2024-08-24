#include<iostream>
using namespace std;

//DETECTION AND REMOVAL OF CYCLE IN LINKED LIST

//....floyd's algorithm this algorithm is also called tortise algorithm

//...it helps in detection of cycle in linked list

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



//................function to make cycle.......

void makecycle(node* &head,int pos){
    node* temp=head;
    node* startnode;

    int count=1;

    while (temp->next!=NULL)
    {
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
    

}

//..................Function for detecting cycle...........

bool detectcycle(node* &head){

    node* fast=head;
    node* slow=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}


//.....function to remove cycle......

void removeCycle(node* &head){

    node* slow=head;
    node* fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;

    } while (slow!=fast);

    fast=head;


    while(slow->next != fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
    

}



int main(){
    node* head=NULL;

    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    insert(head,8);
    
    makecycle(head,4);

    cout<<detectcycle(head)<<endl;
    removeCycle(head);
    cout<<detectcycle(head)<<endl;

    display(head);
}