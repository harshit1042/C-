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
        int cnt = 0;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
            }
        }
        cout << (n * 2) - cnt << endl;
    }
    return 0;
}
