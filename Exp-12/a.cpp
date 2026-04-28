//Adjacency Matrix using STL:
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cout<<"Enter no. of vertices: ";cin>>n;
    cout<<"Enter no. of edges: ";cin>>e;
    vector<vector<int>> adjmatrix(n, vector<int>(n, 0));
    cout<<"Enter edges (u,v):"<<endl;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adjmatrix[u][v]=1;
        adjmatrix[v][u]=1;
    }
    cout<<endl<<"Adjacency Matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adjmatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}