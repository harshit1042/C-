    #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, elm, cnt1, cnt0;
    string s;
    cin >> n;
    cin >> s;
    cnt1 = cnt0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt0++;
        }
        else
            cnt1++;
    }
    int r = min(cnt0, cnt1);
    cout << n - 2 * r;
    return 0;
}