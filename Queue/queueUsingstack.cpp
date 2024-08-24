#include<bits/stdc++.h>
using namespace std;


/* push operation -->O(1)  and pop operation --> O(n)*/

//APPROACH 1:


class Queue1{
    stack<int>s1;
    stack<int>s2;

    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
    }
    if(s2.empty()){
           while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
           }
    }
    int topval=s2.top();
    s2.pop();
    return topval;

}

bool empty(){
    if(s1.empty( )&& s2.empty()){
        return true;
    }
    return false;
}
};



//APPROACH 2:

class Queue2{
    stack<int>s1;

    public: 

    void push(int x){
        s1.push(x);
  
    }
    int pop(){
        if(s1.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        int top=s1.top();
        s1.pop();
        if(s1.empty()){
            return top;
        }
        int item=pop();
        s1.push(top);

        return item;
    }

    bool empty(){
    if(s1.empty( )){
        return true;
    }
    return false;
}

};



int main(){
    Queue2 q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;

    cout<<q.pop()<<endl;

    cout<<q.empty()<<endl;

}







// #include<iostream>
// using namespace std;

// class test{
//     int *p;
//     public:
//    test(int xx ,char ch){
//     p=new int();
//     *p=xx+ int(ch);
//     cout<<*p;
//    }
//    ~test()
// {
//     delete p;
// }   

// };


// int main(){
//    test obj(15,'A');
//    return 0;
// }

