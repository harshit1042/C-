#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll A, B, n;
        cin >> A >> B >> n;
        vector<ll> a(n);
        for (ll p = 0; p < n; p++)
        {
            cin >> a[p];
        }
        vector<ll> b(n);
        for (ll p = 0; p < n; p++)
        {
            cin >> b[p];
        }
        vector<ll> d(n);
        for (ll p = 0; p < n; p++)
        {
            d[p] = ((b[p] - 1) / A) * a[p];
        }
        for (ll p = 0; p < n; p++)
        {
            B -= d[p];
        }
        sort(a.begin(), a.end());
        bool res = B > 0;
        for (ll p = 0; p < n; p++)
        {
            if (B <= 0)
            {
                res = false;
                break;
            }
            B -= a[p];
        }

        if (res)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}