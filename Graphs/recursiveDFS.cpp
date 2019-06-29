void dfs(int source, vector<int> g[], bool vis[])
{

    // Your code here
     vis[source] = true;
     cout<<source<<" ";

    for(auto i:g[source])
    {
      if(!vis[i])
        dfs(i, g, vis);
    }
}
