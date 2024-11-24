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
    cin >> n;
    string s;
    cin >> s;

    map<int, char> mp;
    for (int i = 1; i <= 26; i++)
    {
      mp[i] = 'a' + (i - 1);
    }

    string ans;
    int r = n - 1;

    while (r >= 0)
    {
      if (s[r] == '0')
      {

        int last = (s[r - 2] - '0') * 10 + (s[r - 1] - '0');
        ans += mp[last];
        r -= 3;
      }
      else
      {
        int last = s[r] - '0';
        ans += mp[last];
        r--;
      }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
  }
  return 0;
}
