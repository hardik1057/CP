#define haha
/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    int ar[]={2,5,4,1,3};
    int ar1[]={8,7,4,5,6};
    cout<<max(ar[2],ar1[3])<<endl;
    vector<int>v{2,5,4,1,3};
    vector<int>v1{8,7,4,5,6};
    cout<<max(v.at(1),v.at(2));
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