#include<bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> adjList;
unordered_map<int, bool> visited;
void createAdjList(int n, int m, bool direction){
for(int i=0; i<m; i++){
    cout<<"Enter Edge #"<<i+1<<": ";
    int u, v;
    cin>>u>>v;
    adjList[u].push_back(v);
    if(!direction)
    adjList[v].push_back(u);
}
}
void printAdjList(){
for(auto it: adjList){
    cout<<it.first<<"-> ";
    for(auto i: it.second){
        cout<<i<<", ";
    }
    cout<<endl;
}
}
void dfs(unordered_map<int, vector<int>> &adjlist, int n, int m, int node){

int val= node;
visited[val]=1;
cout<<val<<" ";
for(auto it: adjList[val]){
    if(!visited[it]) 
    dfs(adjList, n, m, it);
    // cout<<it<<" ";
    
}
}

int main(){
    int n, m;
    bool direction;
    cout<<"Enter nodes, edges, & direction:";
    cin>>n>>m>>direction;
    createAdjList(n, m, direction);
    printAdjList();
    int node=4;
    dfs(adjList, n, m, node);
}