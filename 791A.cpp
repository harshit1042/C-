#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z = 0;
    cin >> x >> y;
    if (x > y)
    {
        z = 0;
    }
    else
    {
        while (x <= y)
        {
            x = x * 3;
            y = y * 2;
            z++;
        }
        cout << z << endl;
    }
    return 0;
}
