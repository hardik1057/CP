#include <iostream>

using namespace std;

int main()
{
    int t, a, b, c, d, x, y, z;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d >> x;
        if (a % c == 0)
        {
            y = a / c;
        }
        else
        {
            y = a / c + 1;
        }
        if (b % d == 0)
        {
            z = b / d;
        }
        else
        {
            z = b / d + 1;
        }
        if (y + z > x)
        {
            cout << -1;
        }
        else
        {
            cout << y << " " << z << endl;
        }
        cout << endl;
    }
    return 0;
}