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





 int length(node* &head){
    node* temp=head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
 }

node * knappend(node* &head,int k){
    node* newhead;
    node* newtail;
    node* tail=head;

    int l=length(head);
    k=k%l;

    int count=1;

    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;

    return newhead;

}

int main(){

    node* head=NULL;
int n,a;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        insert(head,a);
    }

    display(head);

    node* newhead= knappend(head,2);
    display(newhead);


}