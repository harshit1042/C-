#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j;
    string s;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            s = "";
            for (j = 1; j <= m; j++)
            {
                s += '#';
            }
        }
        else if ((i % 2 == 0) && (i % 4 == 0))
        {
            s = "#";
            for (j = 2; j <= m; j++)
            {
                s += '.';
            }
        }
        else
        {
            s = "";
            for (j = 2; j <= m; j++)
            {
                s += '.';
            }
            s += '#';
        }
        cout << s << endl;
    }
    return 0;
}