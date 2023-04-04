/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void maxSubArray(vector<int> &nums)
{
    int maxm = 0, n = nums.size();
    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            int curr = 0;
            for (int k = i; k <= j; k++)
            {
                curr += nums[k];
            }
            maxm = max(maxm, curr);
        }
    }
    cout<<maxm;
};
void solve()
{
    int n;
    cin >> n;
    vector<int> head;
    head.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> head[i];
    }

    maxSubArray(head);
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