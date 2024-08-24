#include<iostream>

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

//searching in a LL
bool search(node* head,int key){
    node* temp=head;
    while (temp!=NULL)
    {
       if(temp->data==key){
        return true;
       }
       temp=temp->next;
    }
    return false;
    
}


//inserting node at head
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}


//inserting node at tail
void insertAtTail(node* &head, int val){
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

//insert node at a given position
void insertAfternode(node* &head,int val,int nodeval){
    if(head==NULL){
        return;
    }
    node* n=new node(val);

    node* temp=head;
    while(temp->data!=nodeval){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
}

//print the Linked list
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}

int main(){

    node* head =NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);

   

    insertAtTail(head,4);

    insertAfternode(head,5,3);
    display(head);
    
    

    

    return 0;

}