#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, h, m, day;
    cin >> t;
    while (t--)
    {
        int time = 0;
        cin >> h >> m;
        day = 24 * 60;
        time = h * 60 + m;
        cout << day - time << endl;
    }
    return 0;
}