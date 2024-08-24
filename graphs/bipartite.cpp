
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> make_list(){
    int n,e;
    cout<<"Enter no. of node and edges in the graph :";
    cin>>n>>e;
    cout<<endl;
    vector<vector<int>>g(n);
    for(int i = 0;i<e;i++){
        int a,b;
        cout<<"give nodes with direct edge";
        cin>>a>>b;
        if(a < n && b < n){
            g[a].push_back(b);
            g[b].push_back(a);
        }
    }

    return g;
}

bool dfs(int node,int col,vector<vector<int>>& graph,vector<int> &color){
    color[node]=col;
    for(auto it:graph[node]){
        if(color[it]==-1){
            if(dfs(it,!col,graph,color)==false) return false;
        }
        else if(color[it]==col) return false;
    }
    return true;
}
  
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1 and dfs(i,0,graph,color)==false) return false;
        }
        return true;
    }



/*
USING BFS

class Solution {
public:
    bool check(int i, int color[], vector<vector<int>>& graph){
        queue<int> q;
        q.push(i);
        color[i]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:graph[node]){
                if(color[it]==-1){
                    q.push(it);
                    color[it]=!color[node];
                }
                else if(color[it]==color[node]) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        int color[n];
        for (int i=0;i<n;i++) color[i]=-1;
        for(int i=0;i<n;i++){
            if(color[i]==-1) {
                if(check(i,color,graph)==false) return false;
            }
        }
        return true;
    }
};
*/
int main(){

    return 0;
}