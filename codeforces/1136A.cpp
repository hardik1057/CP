#include <iostream>
using namespace std;
int main()
{
    int ch,cnt = 0,k;
    cin >> ch;
    int pg[2 * ch];
    for (int i = 0; i < 2 * ch; i++)
    {
        cin >> pg[i];
    }
    cin >> k;
    for (int i = 0; i < 2 * ch; i += 2)
    {
        if (k >= pg[i] && k <= pg[i + 1])
        {
            cout << ch - cnt;
            break;
        }
        cnt++;
    }
    return 0;
}