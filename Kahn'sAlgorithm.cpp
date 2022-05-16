int Kahn(auto& adj, auto& topo, int n){
    int u,nodes = 0;
    queue <int> q;

    for(int i = 0; i < n; i++) 
        for(int u: adj[i]) 
            deg[u]++; 

    for(int i = 0; i < n; i++) 
        if(!deg[i]) 
            q.push(i);

    while(!q.empty()){
        u = q.front();
        topo.push(u);
        q.pop();

        nodes++;
        for(int v: adj[u]){
            if(--deg[v]) continue;
            q.push(v); 
            
        }
    }

    return nodes != n;
}