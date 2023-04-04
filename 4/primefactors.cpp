/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    int n,c=2;
    cin>>n;
    while(n>1)
    {
        if(n%c==0) 
        {
            cout<<c<<" ";
            n/=c;
        }
        else c++;
    }
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