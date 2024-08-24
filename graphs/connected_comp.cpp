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

// void dfs(vector<vector<int>>&g,int src,vector<int>vis){
//     vis[src]=1;

//     for(int nbr:g[src]){
//         if(!vis[nbr])dfs(g,nbr,vis);
//     }
//     return;
// }

// int conncomp(vector<vector<int>>&g){
//     int c=0;
//     vector<int>vis(g.size(),0);

//     for(int i=0;i<vis.size();i++){
//         if(!vis[i]){
//             c++;
//             dfs(g,i,vis);
//         }
//     }
//     return c;
// }

int get_size(vector<vector<int>>&g,vector<int>&vis,int src){
    if(vis[src]){
        return 0;
    }
    vis[src]=1;
    int ans=1;
    

    for(int nbr:g[src]){
        if(!vis[nbr]){
            ans+=get_size(g,vis,nbr);
           
        }
    }
    return ans;
}

void conncomp(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);

    vector<int>comp;

    for(int i=0;i<vis.size();i++){
        if(!vis[i]){
            comp.push_back(get_size(g,vis,i));
        }
    }

    for(int i:comp){
        cout<<i<<" ";
    }
cout<<endl;
//answer for 2 quetion 
long long ans=0;
for(auto i:comp){
    ans+= i*(g.size()-1);
}
cout<<(ans/2)<<endl;
}

/*
q2) There are n friends from 0 to n-1. you have to choose 2 person such that they are not related to eachother.
you are given information in the form of M pairs (x,y) i.e there is an link b/w friend x and y.
find the no. of ways in which 2 person frim diff groups can be chosen.
*/
int main(){

    vector<vector<int>> g=make_list();

    conncomp(g);
}