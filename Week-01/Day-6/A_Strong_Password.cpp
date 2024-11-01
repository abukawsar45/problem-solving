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
    string s;
    cin >> s;
    bool added = false;
    string ans;

    int n = s.length();

    if (n == 1)
    {

      if (s[0] == 'a')
        ans = s + 'b';
      else
        ans = s + 'a';
    }
    else
    {
      for (int i = 0; i < n; i++)
      {
        ans.push_back(s[i]);
        if (i < n - 1 && s[i] == s[i + 1] && !added)
        {
          if (s[i] == 'a')
            ans.push_back('b');
          else if (s[i] == 'z')
            ans.push_back('y');
          else
            ans.push_back(s[i] + 1);
          added = true;
        }
      }

      if (!added)
      {
        if (s[n - 1] == 'a')
          ans.push_back('b');
        else
          ans.push_back('a');
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
