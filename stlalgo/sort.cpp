#define haha
/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    int ar[]={2,5,4,1,3};
    sort(ar,ar+5);
    for(int i=0;i<5;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    vector<int>v{8,7,4,5,6};
    sort(v.begin(),v.begin()+5,greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
#ifdef haha
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