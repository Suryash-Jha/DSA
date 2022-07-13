//bfs over this input
/*

*/

#include<bits/stdc++.h>
using namespace std;
unordered_map<int, vector<int>> adjList;
void createAdjList(int n, int m, bool direction){
    cout<<"Enter all edges: ";
  for(int i=0; i<m; i++){
    int u, v;
    cin>>u>>v;
    adjList[u].push_back(v);
    if(!direction)
    adjList[u].push_back(v);
  }
    
}

void printAdjList(){
        for(auto it: adjList){
        cout<<it.first<<"->";
        for(auto i: it.second){
            cout<<i<<", ";
        }
        cout<<endl;
    }
}
void bfs(unordered_map<int, vector<int>> &adjList, int n, int m, int node){
    queue<int> q;
    unordered_map<int, bool> visited;
    for(auto it: adjList){
        visited[it.first]= 0;
    }
    q.push(node);
    while(!q.empty()){
        // cout<<q.front()<<endl;
        // cout<<endl;
        int val= q.front();
        q.pop();
        visited[val]=1;
        cout<<val<<" ";
        for(auto it: adjList[val]){
            if(!visited[it]) q.push(it);
        }

    }

}

/*
-    {4, 5},
-    {5, 6},
-    {6, 7},
-    {5, 8},
-    {8, 7},
-    {7, 9}

*/

int main()
{
bool direction=1;
int n, m;
cin>>n>>m;
createAdjList(n, m, direction);
printAdjList();

bfs(adjList, n, m, 4);
}