#include <bits./stdc++.h>
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
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        if (n % 2 == 1)
        {
            cout << "Mike" << endl;
        }
        else
        {
            ll m = 0;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] < a[m])
                    m = i;
            }
            if (m % 2 == 0)
                cout << "Joe" << endl;
            else
                cout << "Mike" << endl;
        }
    }
    return 0;
}