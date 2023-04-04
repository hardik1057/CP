/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    vector<vector<int>> mat;//{{1,2,3},{4,5,6},{7,8,9}};
    int i, j, n;
    cin >> n;
    mat.resize(n);
    for (i = 0; i < n; i++)
    {
        mat[i].resize(n);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }
    cout<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    } 
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