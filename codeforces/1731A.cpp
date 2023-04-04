#define haha
/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    long long int sum = 1, ans;
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum=sum*arr[i];
   } 
   ans=2022*(sum=sum+(n-1));
   cout<<ans;
}
int main()
{
#ifdef haha
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1;// multiple test cases
    cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}