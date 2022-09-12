#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll cnt = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                ll x;
                cin >> x;
                cnt += x;
            }
        }
        ll res = 0;
        if (cnt == 4)
        {
            res = 2;
        }
        else if (cnt > 0)
        {
            res = 1;
        }
        cout << res << endl;
    }
    return 0;
}
