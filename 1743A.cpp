#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int tmp;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
        }
        int ans = 10 - n;
        int cnt = fact(ans) / (fact(ans - 2) * 2);
        cnt *= 6;
        cout << cnt << endl;
    }
}