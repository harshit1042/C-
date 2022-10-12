#include <bits/stdc++.h>
using namespace std;
int s[256];
int main()
{
    int t;
    cin >> t;
    s['M'] = 1;
    s['L'] = 2;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int c1 = s1.back(), c2 = s2.back();
        if (c1 != c2)
        {
            cout << (s[c1] < s[c2] ? "<" : ">") << endl;
        }
        else if (s1.size() == s2.size())
        {
            cout << "=" << endl;
        }
        else
        {
            int num = s[s1.back()] - 1;
            cout << ((s1.size() * num < s2.size() * num) ? "<" : ">") << endl;
        }
    }
}
