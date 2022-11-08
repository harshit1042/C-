#include <bits/stdc++.h>
using namespace std;
int cnt[210];
int main()
{
    int t, n, x, i, v, a, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        memset(cnt, 0, sizeof(cnt)), k = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> a;
            cnt[a]++;
        }
        for (i = 1; i <= 200; i++)
            if (cnt[i] == 0)
            {
                k++;
                if (k == x)
                {
                    v = i;
                    break;
                }
            }
        for (i = v + 1; i <= 200; i++)
            if (cnt[i] == 0)
                break;
            else
                v = i;
        cout << v << endl;
    }
    return 0;
}