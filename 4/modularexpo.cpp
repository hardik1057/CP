/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
ll binaryexpo(ll base, ll expo, ll mod)
{
    ll ans = 1;
    if (expo == 0)
    {
        ans = 1;
    }
    else if (expo == 1)
    {
        ans = base;
    }
    else
    {
        while (expo > 0)
        {
            if (expo & 1)
            {
                ans = (ans * base) % mod;
                expo--;
            }
            else
            {
                base = (base * base) % mod;
                expo = expo / 2;
            }
        }
    }
    return ans;
}
void solve()
{
    ll base, expo, ans, mod;
    cin >> base >> expo >> mod;
    ans = binaryexpo(base, expo, mod);
    cout << ans;
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