/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
int getIthbit(int n, int k)
{
    int mask = 1 << k;
    return n & mask ? 1 : 0;
}
int setIthbit(int n, int k)
{
    int mask = 1 << k;
    return n | mask;
}
int resetIthbit(int n, int k)
{
    int mask = ~(1 << k);
    return n & mask;
}
int clearIbit(int n, int k)
{
    int mask = -1 << k;
    return n & mask;
}
int setIbit(int n,int k)
{
    int mask=~(1<<k);
    return n|mask;
}
void solve()
{
    int n = 128, n1 = 127;
    cout << n << " " << getIthbit(n, 3) << endl;
    cout << n << " " << setIthbit(n, 3) << endl;
    cout << n1 << " " << resetIthbit(n1, 3) << endl;
    cout << n1 << " " << setIbit(n, 3) << endl;
    cout << n1 << " " << clearIbit(n1, 3) << endl;
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