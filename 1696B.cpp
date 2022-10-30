// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//     }
//     return 0;
// }

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
        ll cnt = 0;
        bool cur = 0;
        while (n--)
        {
            ll x;
            cin >> x;
            if (x != 0)
            {
                cur = 1;
            }
            else if (cur != 0)
            {
                ++cnt;
                cur = 0;
            }
        }

        cnt += cur;
        cnt = (cnt < 2) ? cnt : 2;
        cout << cnt << endl;
    }
}