#include <iostream>
using namespace std;
void DFS(int ** edges,int v,int sv,bool * visited){
    visited[sv]=true;
    for(int i=0;i<v;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1 && !visited[i]){
            DFS(edges,v,i,visited);
        }
    }
}
int count(int ** edges,int v,bool * visited){
    int count=0;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            DFS(edges,v,i,visited);
            count++;       
        }
    }
    return count;
    
}

int main() {
    // Write your code here
    int n,e;
    cin>>n>>e;
    //adjacency matrix
    int ** edges = new int *[n];
    for(int i=0;i<n;i++){
        edges[i]= new int[n];
        for(int j=0 ;j<n ;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    bool * visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    
    cout<<count(edges,n,visited)<<endl;
    // delete all the memory
    for(int i = 0 ; i < n ; i++){
        delete[ ] edges[i];
    }
    delete[] edges;
}