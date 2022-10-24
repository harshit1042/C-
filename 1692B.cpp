#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n;
        set<int> st;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            st.insert(x);
        }
        if ((n - st.size()) % 2 == 0)
            cout << st.size() << endl;
        else
            cout << st.size() - 1 << endl;
    }
    return 0;
}