#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b) for (int i = a; i < b; i++)
int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    int ans = 0;
    int curr = 0;
    int x;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> x;
        if (m[x] == 1)
        {
            curr--;
            ans = max(ans, curr);
        }
        else
        {
            m[x] = 1;
            curr++;
            ans = max(ans, curr);
        }
    }
    cout << ans << endl;

    return 0;
}