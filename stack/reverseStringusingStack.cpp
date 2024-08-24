#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){

    stack<string>ans;

    for(int i=0; i<s.length();i++){
        string word="";
        while(s[i] !=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        ans.push(word);
    }

    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }


}

int main(){
    
    string s;
    getline(cin,s);

    reverseSentence(s);
}