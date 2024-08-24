#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int>q1;
    queue<int>q2;

    public:
    Stack(){
        N=0;

    }

    void push(int x){
        N++;
        q1.push(x);
    }

    void pop(){
        if(q1.empty()){
            cout<<"stack is empty"<<endl;
            return;
                   }
        while(q1.size() !=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue<int>temp=q1;
        q1=q2;
        q2=q1;
    }

    int top(){
         if(q1.empty()){
            cout<<"stack is empty"<<endl;
            return -1;
           }
           while(q1.size() !=1){
            q2.push(q1.front());
            q1.pop();
           }
           int t=q1.front();
           q1.pop();
           q2.push(t);
           queue<int>temp=q1;
        q1=q2;
        q2=q1;
  return t;
    }

    int size(){
        return N;
    }
};


int main(){

    
Stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);

cout<<s.top()<<endl;
s.pop();

cout<<s.top()<<endl;
s.pop();

cout<<s.top()<<endl;
s.pop();

cout<<s.top()<<endl;
s.pop();
}