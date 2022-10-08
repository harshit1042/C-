#include <bits/stdc++.h>
// long long ll;
using namespace std;
int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    long long int sum;
    long long int x = n / a;
    long long int y = m / a;
    if (n % a != 0)
    {
        x += 1;
    }
    if (m % a != 0)
    {
        y += 1;
    }
    sum = x * y;
    cout << sum << endl;
}