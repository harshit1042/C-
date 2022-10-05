#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin >> a;
        if (a % 2 != 0 || a <= 3)
        {
            cout << "-1" << endl;
        }
        else
        {
            a = a / 2;
            ll temp1 = a / 3;
            if (a % 3 == 2 || a % 3 == 1)
            {
                temp1++;
            }
            ll temp2 = a / 2;
            cout << min(temp1, temp2) << " " << max(temp1, temp2)<<endl;
        }
    }
    return 0;
}