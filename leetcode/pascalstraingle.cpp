/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> re;
        int c;
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (i == 0 || j == 0)
                    c = 1;
                else
                    c = c * (i - j + 1) / j;
                cout << c << " ";
            }
            cout << endl;
        }
        return re;
    }
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1, num=0;// multiple test cases
    cin >> num;
    while (T--)
    {
        generate(num);
        if (T)
            cout << "\n";
    }
    return 0;
}