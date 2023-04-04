#include <iostream>
using namespace std;
int main()
{
    int n, ans, cnt;
    string str;
    while (cin >> n)
    {
        ans = 0;
        cnt = 0;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
            if (str[i] == 'z')
                ans++;
            else if (str[i] == 'n')
                cnt++;
        if (!cnt)
        {
            cout << 0;
            for (int i = 1; i < ans; i++)
                cout << " " << 0;
            cout << endl;
        }
        else
        {
            cout << 1;
            for (int i = 1; i < cnt; i++)
                cout << " " << 1;
            for (int i = 0; i < ans; i++)
                cout << " " << 0;
            cout << endl;
        }
    }
    return 0;
}