#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll p = 0; p < n; p++)
        {
            cin >> v[p];
        }
        if (n <= 1)
        {
            cout << "-1" << endl;
            continue;
        }
        vector<ll> b(n);
        ll wait = -1;
        for (ll p = 0; p < n; p++)
        {
            if (wait > 0)
            {
                b[p] = wait;
                wait = -1;
            }
            else if (v[p] == p + 1)
            {
                b[p] = p + 2;
                wait = p + 1;
            }
            else
            {
                b[p] = p + 1;
            }
        }

        if (wait > 0)
        {
            b[n - 1] = b[n - 2];
            b[n - 2] = wait;
        }

        for (ll p = 0; p < n; p++)
        {
            cout << b[p] << " ";
        }
        cout << endl;
    }
}