#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>make_matrix(){

    int n,e;

    cout<<"enter no.of node and edges in the graph: ";
    cin>>n>>e;
    cout<<endl;

    vector<vector<int>>g(vector<vector<int>>(n,vector<int>(n,0)));

    for(int i=0;i<e;i++){
        int a,b;
        cout<<"give nodes with direct edge";
        cin>>a>>b;
        if(a<n && b<n){
            g[a][b]=1;
            g[b][a]=1;
        }
    }
    return g;

}

vector<vector<int>> make_list(){
     int n,e;

    cout<<"enter no.of node and edges in the graph: ";
    cin>>n>>e;
    cout<<endl;

    vector<vector<int>>g(n);

    for(int i=0;i<e;i++){
        int a,b;
        cout<<"give nodes with direct edge";
        cin>>a>>b;
        if(a<n && b<n){ 
            g[a].push_back(b);
            g[b].push_back(a);
        }
    }
    return g;
}


void display_list(int v, vector<vector<int>>& g) {
    for (int i = 0; i < v; i++) {
        cout << "Node " << i << " is connected to: ";
        for (int j = 0; j < g[i].size(); j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}

void display_make(int v,vector<vector<int>>&g){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<g[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){

    int  v;
    cin>>v;

 vector<vector<int>>result=make_list();
    display_list(v,result);



    return 0;
}