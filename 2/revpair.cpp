#define haha
/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
void solve()
{
    vector<pair<int, int>> vp = {{5, 4}, {1, 6}, {2, 1}, {3, 2}, {9, 7}};
    // for (int i = 0; i < 5; i++) // original
    // {
    //     cout << vp[i].first << " " << vp[i].second << endl;
    // }
    // cout<<endl;
    sort(vp.begin(), vp.end());// ascending sorting using the first element in pair 
    for (int i = 0; i < 5; i++)
    {
        cout << vp[i].first << " " << vp[i].second <<endl;
    }
    cout<<endl;
    sort(vp.begin(), vp.end(), cmp);// ascending sorted using 2nd element in pair 
    for (int i = 0; i < 5; i++)
    {
        cout << vp[i].first << " " << vp[i].second << endl;
    }
    cout<<endl;
    sort(vp.rbegin(), vp.rend(), cmp); //  decreasing sorted using 2nd element in pair
    for (int i = 0; i < 5; i++)
    {
        cout << vp[i].first << " " << vp[i].second << endl;
    }
}
int main()
{
#ifdef haha
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