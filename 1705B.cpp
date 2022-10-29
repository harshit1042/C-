#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll fp = -1;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (fp == -1 && a[i] > 0)
        {
            fp = i;
        }
    }
    if (fp == -1 || fp == n - 1)
    {
        cout << 0 << endl;
        return 0;
    }
    for (ll i = fp; i < n - 1; i++)
    {
        ans += a[i];
        if (a[i] == 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}