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
#define endl '\n'

void solve()
{
    int arr[3][3];
    f(i, 0, 3)
            f(j, 0, 3)
                cin >>
        arr[i][j];
    int temp[3][3];
    f(i, 0, 3)
    {
        f(j, 0, 3)
        {
            temp[i][j] = arr[i][j];
            if (i + 1 <= 2)
                temp[i][j] += arr[i + 1][j];
            if (i - 1 >= 0)
                temp[i][j] += arr[i - 1][j];
            if (j + 1 <= 2)
                temp[i][j] += arr[i][j + 1];
            if (j - 1 >= 0)
                temp[i][j] += arr[i][j - 1];
            bool ans = temp[i][j] % 2 ? 0 : 1;
            cout << ans;
        }
        cout << endl;
    }
}

int main()
{
    boost;
    // int t; cin>>t;
    solve();

    return 0;
}