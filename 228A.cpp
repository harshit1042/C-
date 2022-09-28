#include <iostream>
#include <algorithm>
using namespace std;
int a[5], e = 3;
int main()
{
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 4);
    for (int i = 0; i < 3; i++)
    {
        if (a[i] != a[i + 1])
        {
            e--;
        }
    }
    cout << e;
}