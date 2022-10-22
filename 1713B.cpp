#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int max = 0;
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
            {
                max = a[i];
                index = i;
            }
        }
        int ans = 0;
        for (int i = index + 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                ans = 1;
                break;
            }
        }
        for (int i = index - 1; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
            {
                ans = 1;
                break;
            }
        }
        if (ans == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}