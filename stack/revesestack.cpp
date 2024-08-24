#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//brute force

void brutereverse(stack<int> &st){
    if(st.size()<=1){
        return;
    }
    vector<int>v;
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }

    for(int a:v){
        st.push(a);
    }
    return;
}


//recursive

void insertAtbottom(stack<int> &st,int v){
    if(st.empty()){
        st.push(v);
          return;
    }
    int t=st.top();
    st.pop();
    insertAtbottom(st,v);

    st.push(t);
}
void reverse(stack<int> st){

    if(st.empty()){
        return;
    }

    int t=st.top();
    st.pop();

    reverse(st);
    insertAtbottom(st,t);
}

int main(){

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    //brutereverse(st);

    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();

    }cout<<endl;



}