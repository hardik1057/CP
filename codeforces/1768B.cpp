/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void solve()
{
    int n, k;
    cin >> n >> k;
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == last + 1)
            last++;
    }
    cout << (n - last + k - 1) / k;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1; // multiple test cases
    cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}