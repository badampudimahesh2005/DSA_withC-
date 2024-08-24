#include<bits/stdc++.h>
using namespace std;


vector<int> stockspan(vector<int> prices){

    stack<pair<int,int>>s;
    vector<int>res;

    for(auto price:prices){
        int day=1;
        while(!s.empty() && s.top().first <= price){
            day+=s.top().second;
            s.pop();

        }
        s.push({price,day});
        res.push_back(day);


    }

    return res;

}

int main(){

    vector<int> a={100,80,60,70,60,75,85};
    vector<int> res= stockspan(a);

    for(auto i :res){
        cout<<i<<" ";
    }cout<<endl;


    return 0;

}