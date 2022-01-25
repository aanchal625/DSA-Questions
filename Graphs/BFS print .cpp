//print BFS
void singlecomponentBFS(int **edges,int v,bool* visited,int vertex){
    queue< int > pn;
    pn.push(vertex);
    visited[vertex]=true;

    while ( !pn.empty()){
        int front=pn.front();
        pn.pop();

        cout << front <<" ";

        for(int i=0;i<v;i++){
            if( edges[front][i]==1 && !visited[i]){
                pn.push(i);
                visited[i]=true;
            }

        }
    }
}
// for the vertices that are isolated
void printBFS( int ** edges,int v){
    bool* visited = new bool[v];

    for(int i = 0; i < v; i++){
        if(!visited[i]){
            singlecomponentBFS(edges,v,visited,i);
        }
    }
    delete[] visited;
}