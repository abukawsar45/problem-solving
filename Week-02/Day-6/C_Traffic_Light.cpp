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
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s += s;

    int assume = 0;

    int cnt = 0, ans = 0;

    if (c == 'g')
    {
      cout << 0 << endl;
    }
    else
    {
      for (int i = 0; i < s.size(); i++)
      {
        if (s[i] == 'g')
        {
          ans = max(ans, cnt);
          assume = 0;
        }
        if (s[i] == c && !assume)
        {
          assume = 1;
          cnt = 0;
        }
        if (assume)
          cnt++;
      }

      cout << ans << endl;
    }
  }
  return 0;
}