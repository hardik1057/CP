#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(vector<vector<int>> &v)
{
    queue<int> q;
    int l = v.size();
    vector<bool> visited(l, false);
    for (int i = 1; i < l; i++)
    {
        if (!visited[i])
        {
            q.push(i);
            visited[i] = true;
            while (!q.empty())
            {
                int u = q.front();
                q.pop();
                cout << u << " ";
                for (int j = 0; j < v[u].size(); j++)
                {
                    if (visited[v[u][j]] == false)
                    {
                        q.push(v[u][j]);
                        visited[v[u][j]] = true;
                    }
                }
            }
        }
    }
    cout << endl;
}
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
void outdegree(vector<vector<int>> adj)
{
    int r = adj.size();
    for (int i = 1; i < r; i++)
    {
        cout << "Outdegree of " << i << " is " << adj[i].size() << endl;
    }
}
void indegree(vector<vector<int>> adj)
{
    int r = adj.size();
    cout << endl;
    for (int i = 1; i < r; i++)
    {
        int cnt = 0;
        for (int j = 1; j < r; j++)
        {
            if (j == i)
            {
                continue;
            }
            for (int k = 0; k < adj[j].size(); k++)
            {
                if (adj[j][k] == i)
                {
                    cnt++;
                }
            }
        }
        cout << "Indegree for " << i << " is " << cnt << endl;
    }
}
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
int main()
{
    vector<vector<int>> v;
    int n, k, u, v1;
    cout << "Enter Number of Vertices:";
    cin >> n;
    v.resize(n + 1);
    cout << "Enter Number of Edges:";
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> u >> v1;
        v[u].push_back(v1);
    }
    bfs(v);
    DFS(v);
    indegree(v);
    outdegree(v);
    non_reachable(v);
    return 0;
}
