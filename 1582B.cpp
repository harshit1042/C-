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
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                zero++;
            else if (a[i] == 1)
                one++;
        }
        cout << one * (1LL << zero) << endl;
    }
    return 0;
}