#include<bits/stdc++.h>
using namespace std; 

class graph{ 
unordered_map<int, vector<int>> adj;

public:
void addEdges(int u, int v, bool direction){
    adj[u].push_back(v);
    if(!direction){
        adj[v].push_back(u);
    }
    
}
void printGraph(){
    for(auto it: adj){
        cout<<it.first<<"->";
        for(auto i: it.second){
            cout<<i<<",";

        }
        cout<<endl;
    }
}

}; 
int main(){


//Code with user input
int n, m;
cout<<"Number of nodes:";
cin>>n;
cout<<"Number of edges:";
cin>>m;
graph G;
for(int i=0; i<m; i++){
    int u, v;
    bool direction;
    cin>>u>>v>>direction;
    G.addEdges(u, v, direction);

}
G.printGraph();
return 0;
//Basic Code with no user-input
// graph G;
// G.addEdges(0, 1, 0);
// G.addEdges(1, 2, 0);
// G.addEdges(2, 3, 0);
// // G.addEdges(3, 4, 0);


}
