// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define vi vector<int>
// #define vll vector<long long>
// #define f(i, a, b) for (int i = a; i < b; i++)
// #define int3     \
//     int a, b, c; \
//     cin >> a >> b >> c
// #define int4        \
//     int a, b, c, d; \
//     cin >> a >> b >> c >> d
// #define boost ios_base::sync_with_stdio(0), cin.tie(0)
// int main()
// {
//     int n, m, i;
//     cin >> n >> m;
//     int f1[m];
//     vector<int> v;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> f1[i];
//         // cout << f1 << " ";
//     }
//     int d = *max_element(f1, f1 + n);
//     // cout << d << endl;
//     int a;
//     for (int i = n; i < m; i++)
//     {
//         a = d - f1[i];
//         if (a > 0)
//         {
//             v.push_back(a);
//         }
//         else
//         {
//             v.push_back(-a);
//         }
//         // cout << a << endl;
//     }
//     for (auto t : v)
//     {
//         cout << abs(t) << " ";
//     }
//     int c = *min_element(v.begin(), v.end());
//     cout << c << endl;
//     // for (int i = 0; i < count; i++)
//     // {
//     //     /* code */
//     // }
// }

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
    int n, m;
    cin >> n >> m;
    vll arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int x = INT_MAX;
    int i = 0;
    while (i + n - 1 != m)
    {
        int diff = arr[i + n - 1] - arr[i];
        if (diff < x)
            x = diff;
        i++;
    }
    cout << x << endl;

    arr.clear();
}