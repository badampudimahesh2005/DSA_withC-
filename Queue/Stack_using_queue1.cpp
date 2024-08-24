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
        q2.push(x);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();

        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;

        
    }

    void pop(){
         if(q1.empty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        q1.pop();
        N--;
    }

    int top(){
        if(q1.empty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return q1.front();
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







return 0;
    
}