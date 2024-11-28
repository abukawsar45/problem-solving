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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    map<char, int> mp;
    for (int i = 0; i < 26; i++)
    {
      mp['a' + i] = 0;
    }

    for (int val : v)
    {
      for (auto [x, y] : mp)
      {
        if (y == val)
        {
          cout << x;
          mp[x]++;
          break;
        }
      }
    }
    cout << "\n";
  }
  return 0;
}