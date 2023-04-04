/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void non_reachable(vector<vector<int>> &v)
{
    cout << "hello";
    int flag = 0, l = v.size(), cnt = 0;
    for (int i = 1; i < l; i++)
    {
        flag = 0;
        for (int j = 1; j < l; j++)
        {
            if (j == i)
            {
                continue;
            }
            for (int k = 0; k < v[j].size(); k++)
            {
                if (v[j][k] == i)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cnt++;
        }
    }
    cout << "Number of unreachable states are " << cnt << endl;
}
void solve()
{
    int V, E, u, v;
    cin >> V >> E;
    vector<vector<int>> adj;
    adj.resize(V + 1);
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        // adj[v].push_back(u); // for undirected
    }
    for (int i = 1; i <= V; i++)
    {
        cout << i << "->";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
    non_reachable(adj);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\input.txt", "r", stdin);
    freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\output.txt", "w", stdout);
#endif
    int T = 1; // multiple test cases
    // cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}