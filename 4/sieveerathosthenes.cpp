/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void buildsieve(ll lb, ll ub)
{
    ll sieve[ub+1]={0};// 0 for prime 
    sieve[0]=sieve[1]=1;
    for (ll i=2;i*i<=ub;i++)
    {
        if(sieve[i]==0)
        {
            for(ll j=i*i;j<=ub;j+=i)
            {
                if(j<=ub)
                {
                    sieve[j]=1;// 1 for non prime 
                }
            }
        }
    }
    for(ll i =2 ;i<=ub;i++)
    {
        if(sieve[i]==0)
        {
            cout<<i<<endl;
        }
    }
}
void solve()
{
    ll lb,ub;
    cin>>lb>>ub;
    buildsieve(lb , ub);
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