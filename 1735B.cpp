#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll x = 2 * v[0] - 1;
        for (ll i = 0; i < n; i++)
        {
            ans += (v[i] / x);
            if (v[i] % x == 0)
                ans--;
        }
        cout << ans << endl;
    }
    return 0;
}