#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r, a;
        cin >> l >> r >> a;
        ll d = r / a;
        ll m = r % a;
        ll res = d + m;
        ll p = (d - 1) * a + (a - 1);
        if (p >= l)
        {
            ll temp = (d - 1) + (a - 1);
            res = (res > temp) ? res : temp;
        }
        cout << res << endl;
    }
    return 0;
}