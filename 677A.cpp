#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, num = 0;
    cin >> t >> n;
    while (t--)
    {
        cin >> a;
        if (a > n)
        {
            num++;
        }
        num++;
    }
    cout << num;
}