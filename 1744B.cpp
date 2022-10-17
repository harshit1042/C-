#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q, i, c1 = 0, c2 = 0, s1 = 0, s2 = 0;
        cin >> n >> q;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s1 += a[i];
            if (a[i] % 2 == 0)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        while (q--)
        {
            ll a, b, sum = 0;
            cin >> a >> b;
            if (a == 0)
            {
                s2 += (c1 * b);
                sum = s1 + s2;
                if (b % 2 != 0)
                {
                    c2 += c1;
                    c1 = 0;
                }
            }
            else if (a == 1)
            {
                s2 += (c2 * b);
                sum = s1 + s2;
                if (b % 2 != 0)
                {
                    c1 += c2;
                    c2 = 0;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}