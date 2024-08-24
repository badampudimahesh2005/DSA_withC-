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

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

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



//...........DELETION IN LINKED LIST........


void deletion(node* &head,int val){



    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;


}

//..........TO DELETE THE HEAD

void deletehead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
    
}



//.......FUNCTION TO PRINT THE LINKED LIST

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

    //display(head);

    insertAtTail(head,4);
    display(head);
    
    // cout<<search(head,4);
   //deletion(head,3);
   deletehead(head);
   display(head);
    

    return 0;

}