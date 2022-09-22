#include <iostream>
using namespace std;
int n, k, a, b = 0, num[10000];
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        num[i] = a;
    }
    for (int j = 1; j <= n; j++)
    {
        if (num[j] >= num[k] && num[j] > 0)
        {
            b++;
        }
    }
    cout << b;
}