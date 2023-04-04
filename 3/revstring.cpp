/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    int size,j=0;
    string a;
    getline (cin,a);
    cout<<a<<endl;
    reverse(a.begin(), a.end());
    cout<<a<<endl;
    cout<<a.size()<<endl;
    for (int i=0;i<a.size();i++)
    {
        if(a[i]==' ')
        {
            reverse(a.begin()+j,a.begin()+i);
            j=i+1;
        }
    }
    reverse(a.begin()+j,a.end());
    cout<<a<<endl;
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