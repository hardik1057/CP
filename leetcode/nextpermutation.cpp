/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void solve()
{
    int size,i=0,j=0,temp=0;
    cin>>size;
    vector<int>arr;
    for(int i=0;i<size;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]<arr[i+1])
        {
            break;
        }
    }
    cout<<i<<endl;
    // if(i<0)
    // {
    //     reverse(arr.begin(), arr.end());
    // }
    // else
    // {
        for(j=0;j<i;i++)
        {
            if(arr[j]>arr[i])
            {
                break;
            }
        }
        cout<<j<<endl;
        swap(arr[j],arr[i]);
        reverse(arr.begin()+j+1,arr.end());
   // }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
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