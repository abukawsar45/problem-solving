#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;

    int ans = (y + 1) / 2, xx = 0;
    if(y%2 == 1){
      xx = (y / 2) * 7 + 11;
    }
    else
      xx = (y / 2)*7;

    if (x <= xx)
      cout << ans << endl;
    else{
      int remain = x - xx;
      cout << ans + (remain + 14) / 15 << endl;
    }
  }
  return 0;
}