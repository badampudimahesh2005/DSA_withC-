#include<bits/stdc++.h>
using namespace std;


// LL implemetation is because when we declared n=100 in array implementation but there is only 5 elements in queue so memory waste
//  if size of  array is short but we need to add elementss in queue so we need to increase the size

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class Queue{

    node* front;
    node* back;
    
    public:
    Queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        node* n=new node(x);
        if(front==NULL){
            front=n;
            back=n;
            return;
        }

        back->next=n;
        back=n;
    }

    void pop(){

        if(front==NULL){
            cout<<"Queue underflow"<<endl;
            return;
        }
        node* todelete=front;
        front=front->next;

        delete todelete;

    }

    int peek(){
        if(front==NULL){
            cout<<"Queue underflow"<<endl;
            return -1;
        }
        return front->data;
        
    }

    bool empty(){
        if(front==NULL){
            return true;

        }
        return false;
    }


};

int main(){

     Queue o;
    o.push(1);
     o.push(2);
      o.push(3);
       o.push(4);
        o.push(5);

    cout<<o.peek()<<endl;
    o.pop();

    cout<<o.peek()<<endl;
    o.pop();

    cout<<o.peek()<<endl;
    o.pop();

    cout<<o.peek()<<endl;
    o.pop();

    cout<<o.peek()<<endl;
    o.pop();

    cout<<o.empty()<<endl;

    return 0;

}