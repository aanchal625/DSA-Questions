//print  the graph in DFS way
void singlecomponentDFS(int ** edges,int n,int sv,bool * visited){
    //it will be stuck at a loop so we need 
    //to create an array for vertices we 
    //have visited
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            singlecomponentDFS(edges,n,i,visited);
        }
    }

}
// for the vertices that are isolated
void printDFS( int ** edges,int v){
    bool* visited = new bool[v];

    for(int i = 0; i < v; i++){
        if(!visited[i]){
            singlecomponentDFS(edges,v,i,visited);
        }
    }
    delete[] visited;
}