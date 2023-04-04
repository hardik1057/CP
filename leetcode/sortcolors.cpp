/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void sortColors(vector<int> &nums)
{
    int n,a;
    n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (nums[i] > nums[j])
            {
                a = nums[i];
                nums[i] = nums[j];
                nums[j] = a;
            }
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    vector<int>head;
    head.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>head[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << head[i] << " ";
    }
    cout<<endl;
    sortColors(head);
    for (int i=0;i<n;i++)
    {
        cout<<head[i]<<" ";
    }    
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