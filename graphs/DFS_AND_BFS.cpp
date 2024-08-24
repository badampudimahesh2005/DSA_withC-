#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> make_matrix(){
    int n,e;
    cout<<"Enter no. of node and edges in the graph :";
    cin>>n>>e;
    cout<<endl;
    vector<vector<int>>g(n,vector<int>(n,0));
    for(int i = 0;i<e;i++){
        int a,b;
        cout<<"give nodes with direct edge";
        cin>>a>>b;
        if(a < n && b < n){
            g[a][b] = 1;
            g[b][a] = 1;
        }
    }

    return g;
}

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

void dfs(vector<vector<int>>&g,int src,vector<int>&vis){
    vis[src] = 1;
    cout<<src<<endl;
    for(int i = 0 ;i<g[src].size();i++){
        int neighbor=g[src][i];
        if(!vis[neighbor])dfs(g,neighbor,vis);
    }
    return ;
}

void bfs(vector<vector<int>>&g,int src,vector<int>&vis){
    queue<int>q;
    q.push(src);
    vis[src] = 1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout<<f<<endl;
        for(int i = 0;i<g[f].size();i++){
            int neighbor=g[f][i];
            if(!vis[neighbor]){
                q.push(neighbor);
                vis[neighbor] = 1;
            }
        }
    }
    return ;
}

void print(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    dfs(g,0,vis);
    //bfs(g,0,vis);
    return ;
}

int main(){
    // vector<vector<int>>g = make_matrix();
    vector<vector<int>>g = make_list();
    print(g);
    return 0;
}