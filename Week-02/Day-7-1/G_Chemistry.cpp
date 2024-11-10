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
    int n, k;
    cin >> n >> k;
    map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
      char c;
      cin >> c;
      mp[c]++;
    }

    int odd = 0, even = 0;

    for (auto [x, y] : mp)
    {
      // cout << x << " " << y << endl;
      if (y % 2 == 1)
      {
        odd++;
      }
      else
        even++;

    }
    odd = odd - k;

    // cout << "odd = " << odd << endl;
    // cout << "even = " << even << endl;
    if (odd <= 1)
    {
      cout << "YES" << endl;
    }
    else
      cout << "NO" << endl;
  }
  return 0;
}