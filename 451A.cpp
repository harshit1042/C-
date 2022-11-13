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
    ll n, m;
    cin >> n >> m;
    ll d = min(n, m);
    if (d % 2 == 0)
    {
        cout << "Malvika" << endl;
    }
    else
    {
        cout << "Akshat" << endl;
    }
}