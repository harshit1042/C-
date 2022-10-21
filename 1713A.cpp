#include <bits/stdc++.h>
#define vr(v) v.begin(), v.end()
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> x, y;
        for (int i = 0; i < n; i++)
        {
            int xx, yy;
            cin >> xx >> yy;
            if (yy == 0)
                x.push_back(xx);
            else
                y.push_back(yy);
        }
        sort(vr(x));
        sort(vr(y));
        ll xmin, xmax, ymin, ymax;
        ll ans = 0;
        if (x.size())
        {
            if (x[0] < 0)
            {
                ans += 2 * abs(x[0]);
            }
            if (x[x.size() - 1] > 0)
                ans += 2 * abs(x[x.size() - 1]);
        }
        x = y;
        if (x.size())
        {
            if (x[0] < 0)
            {
                ans += 2 * abs(x[0]);
            }
            if (x[x.size() - 1] > 0)
                ans += 2 * abs(x[x.size() - 1]);
        }
        cout << ans << endl;
    }
    return 0;
}