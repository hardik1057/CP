/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void setZeroes(vector<vector<int>> &matrix)
{
    vector<vector<int>> matrix2;
    matrix2.resize(matrix.size());
    for (int i = 0; i < matrix.size(); i++)
    {
        matrix2[i].resize(matrix[i].size());
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            matrix2[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < matrix[i].size(); k++)
                {
                    matrix2[i][k] = 0;
                }
                for (int k = 0; k < matrix.size(); k++)
                {
                    matrix2[k][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < matrix2.size(); i++)
    {
        for (int j = 0; j < matrix2[i].size(); j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
}
void solve()
{
    vector<vector<int>> mat;
    int i, j, n = 3, m = 3;
    cin >>n>>m;
    mat.resize(n);
    for (i = 0; i < n; i++)
    {
        mat[i].resize(m);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    setZeroes(mat);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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