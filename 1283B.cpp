#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n, k, a;
    cin >> t;
    while (t--)
    {
        cin >> n >> k; // 5 2
        if (n % k == 0)
        {
            cout << n << endl;
        }
        else
        {
            a = (n / k) * k;
            cout << min(n, a + (k / 2)) << endl;
        }
    }
    return 0;
}
