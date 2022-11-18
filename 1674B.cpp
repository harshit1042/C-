#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define f(i, a, b) for (int i = a; i < b; i++)
#define int3     \
    int a, b, c; \
    cin >> a >> b >> c
#define int4        \
    int a, b, c, d; \
    cin >> a >> b >> c >> d
#define boost ios_base::sync_with_stdio(0), cin.tie(0)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long res = 1 + 25 * (s[0] - 'a') + (s[1] - 'a') - (s[1] > s[0]);
        cout << res << endl;
    }
    return 0;
}