#include<bits/stdc++.h>
using namespace std;



vector<vector<int>> makedirected(){
    int n,e;
    cout<<"enter the no. of nodes and edges :";
    cin>>n>>e;
    cout<<endl;

    vector<vector<int>>g(n);

    for(int i=0;i<e;i++){
        int a,b;
        cout << "Enter nodes with a directed edge: ";
        cin>>a>>b;
        if(a<n && b<e){
            g[a].push_back(b);
        }
    }
    return g;
}


bool iscycle(int src, vector<vector<int>> &g,vector<int>&vis,vector<int>stack){
    stack[src]=1;
    if(!vis[src]){
        vis[src]=1;
        for(auto i : g[src]){
            if(!vis[i] && iscycle(i,g,vis,stack)){
                return true;
            }
            if(stack[i]){
                return true;
            }
        }
    }
    stack[src]=0;
    return false;
}

bool havecycle(vector<vector<int>>&g ){
    bool cycle =false;
    vector<int>stack(g.size(),0);
    vector<int>vis(g.size(),0);

    for(int i=0;i<g.size();i++){
        if(!vis[i] && iscycle(i,g,vis,stack)){
            cycle =true;
        }
    }
    return cycle;
}
int main(){

    vector<vector<int>> g=makedirected();
    if(havecycle(g)){
        cout<<"cycle is prsent";

    }else{
        cout<<"cycle is not present";
    }

    return 0;
}