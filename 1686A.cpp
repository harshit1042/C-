#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<long> v(n);
        long s(0);
        for (long p = 0; p < n; p++)
        {
            cin >> v[p];
            s += v[p];
        }
        bool res(false);
        for (long p = 0; !res && p < n; p++)
        {
            if (n * v[p] == s)
            {
                res = true;
            }
        }
        if (res != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}