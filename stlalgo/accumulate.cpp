#define haha
/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    int ar[]={1,2,3,4,5,6,7};
    int x=0,y=0;
    x=accumulate(ar,ar+5,7);
    cout<<x<<endl; 
    y=accumulate(ar,ar+7,0);
    cout<<y; 
}
int main()
{
#ifdef haha
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