/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void indegree(vector<vector <int>> adj){
    int r=adj.size();
    cout<<endl;
    for(int i=1;i<r;i++){
        int cnt=0;
        for(int j=1;j<r;j++){
            if(j == i)
            {
                continue;
            }
            for(int k=0;k<adj[j].size();k++){
                if (adj[j][k] == i)
                {
                    cnt++;
                }
            }
        }
        cout<<"Indegree for "<<i<<" is "<<cnt<<endl;
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
        int out=0;
        cout<<"\n"<<i<<"->";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
            out++;
        }
        cout<<"\n";
        cout<<"Out degree for "<<i<<" is-"<<out<<" ";
    }
    indegree(adj);
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