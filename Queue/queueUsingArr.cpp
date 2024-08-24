#include<bits/stdc++.h>
using namespace std;

#define n 20

class Queue{
    int* arr;
    int front;
    int back;
    
    public:
    Queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void push(int x){
        if(back==n-1){
            cout<<"queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1 || front> back){
            cout<<"no elements in queue"<<endl;
            return;
        }
         front++;
    }

    int peek(){
        if(front==-1 || front> back){
            cout<<"no elements in queue"<<endl;
            return -1;
        }

        return arr[front];

    }

    bool empty(){
        if(front==-1 || front> back){
           
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