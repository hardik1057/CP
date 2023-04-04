/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
vector<int> convert(int n)
{
    vector<int> binary;
    while(n>0)
    {
        // int temp=0;
        // temp=n%2;
        binary.push_back(n%2);
        n=n/2;
    }
    return binary;
}
void solve()
{
    int org1,org2,cnt=0;
    cin>>org1>>org2;
    vector<int>binary1=convert(org1);
    for(int i=0;i<binary1.size();i++)
    {
        cout<<binary1[i]<<" ";
    }
    cout<<endl;
    vector<int> binary2 = convert(org2);
    for (int i = 0; i < binary2.size(); i++)
    {
        cout << binary2[i]<<" ";
    }
    cout<<endl;
    for(int i= binary1.size()-1;i>=0;i--)
    {
        if (binary1[i]!=binary2[i])
        {
            cnt++;
        }
    }
    cout<<cnt;
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