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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end()); // 2 3 4 8
        for (int i = 1; i <= n / 2; i++)
        {
            cout << a[i] << " " << a[0] << endl;
        }
    }
    return 0;
}