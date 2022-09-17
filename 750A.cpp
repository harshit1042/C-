#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int res = 240 - b, sum = 0, c = 0;
    for (int i = 1; i <= a; i++)
    {
        sum += 5 * i;
        if (sum > res)
        {
            break;
        }
        c = c + 1;
    }
    cout << c << endl;
    return 0;
}