/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void hehe(ll A , ll B, ll &x,ll &y)
{
    if (B==0)
    {
        return;
    }
    ll c=A%B;
    A=B;
    B=c;
    hehe(A,B,x,y);
    if(B==0)
    {
        x=1;
    }
    else
    {
        ll z;
        z=x;
        x=y;
        y=z-((A/B)*y);
    }
}
void solve()
{
    ll A,B,x=0,y=0;
    cin>>A>>B;
    hehe(A,B, x,y);
    ll z;
    z = x;
    x = y;
    y = z - ((A / B) * y);
    cout<<x<<" "<<y;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\input.txt", "r", stdin);
    freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\output.txt", "w", stdout);
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