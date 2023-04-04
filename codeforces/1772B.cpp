#define haha
/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void rotate(vector<vector<int>>&mat)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 2; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }
}
void solve()
{
    vector<vector<int>>arr;
    int cnt=0,m=0;
    arr.resize(2);
    for (int i = 0; i < 2; i++)
    {
        arr[i].resize(2);
    }
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    while(cnt!=4)
    {
        if (((arr[0][0] < arr[0][1]) && (arr[1][0] < arr[1][1])) && ((arr[0][0] < arr[1][0]) && (arr[0][1] < arr[1][1])))
        {
            m=1;
        }
        else
        {
            rotate(arr);
        }
        cnt++;
    }
    if(m==1)
    {
        cout<<"YES";
    }    
    else
    {
        cout<<"NO";
    }
    m=0;
}
int main()
{
#ifdef haha
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T =0;// multiple test cases
    cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}
