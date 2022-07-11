//bfs over this input
/*

*/

#include<bits/stdc++.h>
using namespace std;
unordered_map<int, vector<int>> adjList;
void createAdjList(unordered_multimap<int, int> &edges, int n, int m, bool direction){
    
    for(auto it: edges){
            //  cout<<it.first<<" "<<it.second<<endl;
        adjList[it.first].push_back(it.second);
        if(!direction)
        adjList[it.second].push_back(it.first);
        // cout<<it.first<" "<<it.second<<endl;
        
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


int main()
{
bool direction=0;
unordered_multimap<int, int> edges={
    {4, 5},
    {5, 6},
    {6, 7},
    {5, 8},
    {8, 7},
    {7, 9}

};
int m= edges.size();
int n= 6;
createAdjList(edges, n, m, direction);
// printAdjList();

bfs(adjList, n, m, 4);
}