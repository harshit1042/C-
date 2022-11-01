#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> freq;
    string s;
    while (n--)
    {
        cin >> s;
        if (freq.count(s) == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << freq[s] << endl;
        }
        freq[s] += 1;
    }
    return 0;
}