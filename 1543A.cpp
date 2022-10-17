#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll dif = (a >= b) ? (a - b) : (b - a);
        if (a > b)
        {
            cout << dif << " " << min(dif - (a % dif), b % dif) << endl;
        }
        else if (b > a)
        {
            cout << dif << " " << min(dif - (b % dif), a % dif) << endl;
        }
        else
        {
            cout << 0 << " " << 0 << endl;
        }
    }
    return 0;
}