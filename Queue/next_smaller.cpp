#include<bits/stdc++.h>
using namespace std;

vector<int> nextsmaller(vector<int>arr, int n){

    stack<int>s;
    s.push(-1);
 vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
       while(s.top()>=arr[i]){
        s.pop();
       }
       ans[i]=s.top();
       s.push(arr[i]);
    }
return ans;


}

int main(){

int n;
cin>>n;

vector<int>arr;

for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr.push_back(x);
}


vector<int>result=nextsmaller(arr,n);

for(auto i:result){
    cout<<i<<" ";
}
    return 0;
}