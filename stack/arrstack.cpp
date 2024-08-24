#include<bits/stdc++.h>
using namespace std;

#define n 100

class mystack{

    int* arr;
    int top;

public:
    mystack(){
        arr=new int [n];
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"stack owerflow";
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"no element to pop";
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"no element in stack";
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};

int main(){

    mystack s;

    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
   
   cout<<s.Top()<<endl;

    s.pop();
    cout<<s.Top()<<endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    cout<<endl<<s.empty();

    return  0;
}