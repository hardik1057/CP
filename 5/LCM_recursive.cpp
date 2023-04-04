/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
ll hcf(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else 
    {
        return hcf(b,a%b);
    }
}
void solve()
{
    ll a,b,ans;
    cin>>a>>b;
    ans=hcf(a,b);
    cout<<(b/ans)*a;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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