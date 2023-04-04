/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
ll hcf(ll a, ll b, int &cnt)
{
    cnt++;
    if (b == 0)
    {
        return a;
    }
    else
    {
        return hcf(b, a % b, cnt);
    }
}
int cnt = 0;
bool compare(pair<pair<int, int>, int> &a, pair<pair<int, int>, int> &b)
{
    return a.second<b.second;
}
void solve()
{
    ll a, b, ans=0;
    vector<pair<pair<int, int>, int>> p /*{{{13, 8}, 6}, {{4, 12}, 3}, {{21, 13}, 7}}*/;
    p.resize(3);
    for(int i=0;i<3;i++)
    {
        cin >> a >> b;
        ans = hcf(a, b, cnt);
        p[i].first.first=a;
        p[i].first.second=b;
        p[i].second=cnt;
        cnt=0;
    }
    //cout << ans << " " << cnt << "\n";
    sort(p.begin(), p.end(), compare);
    for(int i=0;i<3;i++)
    {
        cout<<p[i].first.first<<" "<<p[i].first.second<< " "<<p[i].second<< endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\input.txt", "r", stdin);
        freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\output.txt", "w", stdout);
#endif
    int T = 1;// multiple test cases
    cin >> T;
        solve();
    return 0;
}