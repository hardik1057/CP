#define haha
/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    int ar[]={1,2,3,4,5};
    reverse(ar,ar+5);
    for(int i=0;i<5;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    vector<int>v{5,4,3,2,1};
    reverse(v.begin(),v.end());
    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
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