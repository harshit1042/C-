#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, num = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s[i];
        cin >> s[i];
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2])
        {
            num = i - 1;
        }
        cout << num;
    }
}