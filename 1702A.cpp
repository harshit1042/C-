#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n; // 178
        n[0]--;
        ll a = stoi(n);
        cout << a << endl;
    }
    return 0;
}