/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    long long int n,ans,fin,a,b,c,square,cube,result;
    //long long mod=1000000007;
    const int n1 = 1000000007;
    cin>>n;
    // ans=((n*(n+1)*((4*n)-1)))/6;
    // fin=(2022*ans)%(1000000007);
    // cout<<(long long)(fin);
    // a=((n*(n+1)*((2*n)+1))/3); 
    // b=((n*(n+1))/2);
    // c=(((a%m)-(b%m))*2022)%m;
    c=((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;
    cout<<c;
    // square = (n*n) % mod;
    // cube = (n*square) % mod;
    // result = (((4*cube) % mod + (3*square) % mod - n % mod)*337) % mod;
    // cout<<result;
}
int main()
{
#ifndef ONLINE_JUDGE
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