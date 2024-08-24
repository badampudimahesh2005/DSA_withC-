#include<bits/stdc++.h>
using namespace std;


int precedense(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }else if(c=='+' || c=='-'){
        return 1;

    }else{
        return -1;
    }
};

string infixtoprefix(string s){

    stack<char>st;
    string res;

    reverse(s.begin(),s.end());

    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            res+=s[i];

        }
        else if(s[i]==')'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            while(!st.empty() && st.top()!=')'){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            if(!st.empty() && precedense(st.top())> precedense(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    reverse(res.begin(),res.end());

    return res;
}


int main(){

    cout<<infixtoprefix("(3+4*2)/(1-5)");

    return 0;
}