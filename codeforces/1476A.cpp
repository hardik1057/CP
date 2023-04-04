/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    long long a, b;
        cin >> a >> b;
        if (a == b)cout << 1;
        else if (a > b)
        {
            if (a % b == 0)
            {
                cout << 1;
            }
            else cout << 2;
        }
        else if (b > a)
        {
            if (b % a == 0)
            {
                cout << b / a;
            }
            else cout << b / a + 1;
        }
}
int main()
{
#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\input.txt", "r", stdin);
        freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\output.txt", "w", stdout);
#endif
    int T = 1;// multiple test cases
    cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}