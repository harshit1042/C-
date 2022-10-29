#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end()); // 1 3 9 10 12 16
        int h = true;
        for (int i = 0; i < n; i++)
        {
            if (v[n + i] - v[i] < x)
                h = false;
        }
        if (h == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}