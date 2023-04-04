/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void DFSU(int u, vector<bool> &visited, vector<vector<int>> v)
{
    if (!visited[u])
    {
        visited[u] = true;
        cout << u << " ";
        for (int i = 0; i < v[u].size(); i++)
        {
            if (!visited[v[u][i]])
            {
                DFSU(v[u][i], visited, v);
            }
        }
    }
}
void DFS(vector<vector<int>> &v)
{
    int l = v.size();
    vector<bool> visited(l, false);
    for (int i = 1; i < l; i++)
    {
        if (!visited[i])
        {
            DFSU(i, visited, v);
        }
    }
}
void solve()
{
    int V,E,u,v;
    cin>>V>>E;
    vector<vector<int>> adj;
    adj.resize(V+1);
    for(int i=0;i<E;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u); // for undirected 
    }
    for (int i=1;i<=V;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
    DFS(adj);
}
int main()
{
#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\input.txt", "r", stdin);
        freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\output.txt", "w", stdout);
#endif
    int T = 1;// multiple test cases
    //cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}