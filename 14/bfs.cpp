/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void bfs(vector<vector<int>> &v)
{
    queue<int> q;
    int l = v.size();
    vector<bool> visited(l,false);
    q.push(1);
    //visited[1] = true;
    for (int i = 1; i < l; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            while (!q.empty())
            {
                int u = q.front();
                q.pop();
                cout << u << " ";
                for (int i = 0; i < v[u].size(); i++)
                {
                    if (visited[v[u][i]] == false)
                    {
                        q.push(v[u][i]);
                        visited[v[u][i]] = true;
                    }
                }
            }
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
    bfs(adj);
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