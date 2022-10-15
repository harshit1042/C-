#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int s, w, h, m, H, M, ans = 3 * 24 * 60, n, day = 24 * 60;
    cin >> n >> H >> M;
    s = 60 * H + M;
    while (n--)
    {
      cin >> h >> m;
      w = 60 * h + m;
      if (w - s < 0)
      {
        w += day;
      }
      ans = min(ans, w - s);
    }
    cout << ans / 60 % 24 << " " << ans % 60 << endl;
  }
  return 0;
}