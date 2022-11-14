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
char key[100] = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main()
{
    char ch[2];
    cin >> ch;
    char input[120];
    cin >> input;
    if (ch[0] == 'L')
    {
        for (int i = 0; i < strlen(input); i++)
        {
            for (int j = 0; j < strlen(key); j++)
            {
                if (input[i] == key[j])
                {
                    cout << key[j + 1];
                    break;
                }
            }
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < strlen(input); i++)
        {
            for (int j = 0; j < strlen(key); j++)
            {
                if (input[i] == key[j])
                {
                    cout << key[j - 1];
                    break;
                }
            }
        }
        cout << endl;
    }
}