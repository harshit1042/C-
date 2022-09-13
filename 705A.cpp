#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        if (i % 2 == 0)
        {
            cout << "I hate ";
        }
        else
        {
            cout << "I love ";
        }
        if (i != t - 1)
        {
            cout << "that ";
        }
        else
        {
            cout << "it ";
        }
    }
}